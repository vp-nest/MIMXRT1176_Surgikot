#include "uart_comm_task.hpp"
#include "osal/this_task.hpp"
#include <cstdio>
#include <cstdarg>
#include <cstring>
#include "fsl_debug_console.h"

// Example ISR-side hook (registered against the LPUART DMA-complete or
// idle-line-detect interrupt in init()). g_uartCommTask is defined in
// main.cpp; this wrapper is the only place a native ISR touches this
// task at all -- it never reaches for a FreeRTOS type directly, it just
// calls the task's own notifyRxReadyFromISR().
//
//   extern "C" void UART_RxIdleLine_IRQHandler(void) {
//       g_uartCommTask.notifyRxReadyFromISR();
//   }

void UartCommTask::init() {
    // BOARD_InitUartPeripheral(): configure LPUART baud/parity/framing,
    // set up a DMA channel to continuously fill m_rxRing circularly, and
    // enable an idle-line/half-full DMA interrupt wired to the ISR above.

    m_queueSet.create(8 /* uartTxQueue depth */ + 1 /* rx semaphore */);
    m_queueSet.add(g_uartTxQueue);
    m_queueSet.add(m_rxReadySem);
    PRINTF("Create UART thread...\r\n");
}

void UartCommTask::run() {
    for (;;) {
        os::QueueSetMember* activated = m_queueSet.select(os::Duration::milliseconds(1000));

        if (activated == &g_uartTxQueue) {
            UartTxMsg msg;
            if (g_uartTxQueue.receive(msg, os::Duration::zero())) {
                sendFrame(msg);
            }
        } else if (activated == &m_rxReadySem) {
            m_rxReadySem.take(os::Duration::zero());
            pollRxAndParse();
        }
        // activated == nullptr: timeout with nothing ready -- a good
        // place for an optional link-alive heartbeat / peer-timeout check.
        // Sleep briefly when idle to yield CPU time to other tasks
        os::this_task::sleepFor(os::Duration::milliseconds(50));
    }
}

void UartCommTask::sendFrame(const UartTxMsg& msg) {
    // Wrap msg.payload[0..msg.len) in the wire framing below and kick off
    // a (non-blocking) DMA TX:
    //   [STX][LEN][PAYLOAD...][CRC16][ETX]
    // e.g. LPUART_TransferSendNonBlocking(UART_PERIPH, &txHandle, &xfer);
    (void)msg;
}

void UartCommTask::pollRxAndParse() {
    // Simple framed-protocol state machine reading out of m_rxRing:
    //   1. scan for STX
    //   2. read LEN
    //   3. accumulate LEN payload bytes (wait for more RX-ready signals
    //      if the ring doesn't have them all yet)
    //   4. validate CRC16 + trailing ETX
    //   5. on success -> onFrameReceived(payload, len)
    //      on CRC/framing error -> logEvent(LOG_WARNING, "bad frame")
    //
    // m_rxTail tracks how far the parser has consumed; the DMA/ISR side
    // owns the write cursor independently, so this is a classic
    // single-producer/single-consumer ring buffer.
}

void UartCommTask::onFrameReceived(const uint8_t* data, size_t len) {
    // Forward decoded telemetry/state to the GUI for display...
    AppStatusEvent evt{ AppEventSource::UART_TASK, AppEventStatus::PROGRESS, 0, 0 };
    g_guiEventQueue.send(evt);

    // ...and record it in the persistent event log.
    logEvent(LogSeverity::LOG_INFO, "RX frame len=%u", static_cast<unsigned>(len));
    (void)data;
}

void UartCommTask::logEvent(LogSeverity sev, const char* fmt, ...) {
    LogEventMsg msg{};
    msg.cmd = LoggerCmd::LOG_EVENT;
    msg.severity = sev;
    std::strncpy(msg.tag, "UART", sizeof(msg.tag) - 1);
    va_list args;
    va_start(args, fmt);
    vsnprintf(msg.message, sizeof(msg.message), fmt, args);
    va_end(args);
    // Never block: if the logger queue is momentarily full, drop the log
    // line rather than stall the UART link.
    g_loggerQueue.send(msg);
}
