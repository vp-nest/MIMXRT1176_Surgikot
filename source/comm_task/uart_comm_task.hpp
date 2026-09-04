#pragma once
//
// uart_comm_task.hpp
// Talks to the peer microcontroller over a framed UART protocol.
// TX is queue-driven (g_uartTxQueue); RX is DMA/interrupt-driven into a
// ring buffer, with the ISR only signalling a binary semaphore -- all
// parsing happens in task context, never in the ISR.
//
// This task waits on TWO independent wake sources (TX queue + RX-ready
// semaphore) using os::QueueSet, so it stays fully event-driven with no
// polling.
//
#include <app_priorities.hpp>
#include <app_types.hpp>

#include "osal/task.hpp"
#include "osal/binary_semaphore.hpp"
#include "osal/queue_set.hpp"

class UartCommTask : public os::Task {
public:
    // Highest priority among the app's own tasks: this task's own CPU
    // usage is small (mostly asleep on the queue set), but the peer link
    // is closest to a hard real-time deadline (protocol timeouts on the
    // other side).
    UartCommTask() : os::Task("UartTask", app::stack::kUartComm, app::priority::kUartComm) {}

    // Called from the UART DMA/idle-line ISR (via a thin C-linkage
    // wrapper -- see uart_comm_task.cpp) to signal that new RX data is
    // ready to be parsed.
    void notifyRxReadyFromISR() { m_rxReadySem.giveFromISR(); }

protected:
    void init() override;
    void run() override;

private:
    void sendFrame(const UartTxMsg& msg);
    void pollRxAndParse();
    void onFrameReceived(const uint8_t* data, size_t len);
    void logEvent(LogSeverity sev, const char* fmt, ...);

    static constexpr size_t kRxRingSize = 256;
    uint8_t m_rxRing[kRxRingSize]{};
    size_t  m_rxTail = 0; // parser's read cursor into m_rxRing

    os::BinarySemaphore m_rxReadySem;
    os::QueueSet        m_queueSet;
};

// Defined in main.cpp, pointing at the single UartCommTask instance, so
// the ISR wrapper in uart_comm_task.cpp has a way to reach
// notifyRxReadyFromISR() without the ISR touching a FreeRTOS type itself.
extern UartCommTask& g_uartCommTask;
