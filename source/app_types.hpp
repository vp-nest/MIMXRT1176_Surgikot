#pragma once
//
// app_types.hpp
// Shared IPC message definitions for the i.MX RT1176 application.
//
// Design principle: every worker task (Upgrade, Logger, UART) owns exactly
// one inbound command queue. The GUI task owns exactly one inbound status
// queue. Nobody reaches into another task's internals -- all cross-task
// communication is copy-by-value through os::Queue<T>. This keeps each
// task's data race-free without extra locking.
//
// Note there is no FreeRTOS include anywhere in this file: queues and
// event groups are declared through the os:: abstraction layer
// (see inc/osal/) so application code never touches a native RTOS type.
//
#include <cstdint>
#include <cstddef>
#include "osal/queue.hpp"
#include "osal/event_group.hpp"

// ---------------------------------------------------------------------
// Commands sent INTO worker tasks
// ---------------------------------------------------------------------

enum class UpgradeCmd : uint8_t {
    START_FROM_USB,
    CANCEL,
};

enum class LoggerCmd : uint8_t {
    LOG_EVENT,       // append one line to the on-flash log
    EXPORT_TO_USB,   // stream the whole log file out to a USB drive
    CANCEL_EXPORT,
};

enum class UartCmd : uint8_t {
    SEND_FRAME,
};

// ---------------------------------------------------------------------
// Status reported OUT of worker tasks, back to the GUI task
// ---------------------------------------------------------------------

enum class AppEventSource : uint8_t {
    UPGRADE_TASK,
    LOGGER_TASK,
    UART_TASK,
};

enum class AppEventStatus : uint8_t {
    STARTED,
    PROGRESS,
    SUCCESS,
    FAILURE,
};

struct AppStatusEvent {
    AppEventSource source;
    AppEventStatus status;
    uint8_t        percent;    // 0-100, valid on PROGRESS
    int32_t        errorCode;  // valid on FAILURE, 0 otherwise
};

// ---------------------------------------------------------------------
// Payload structs. Kept fixed-size and POD so they can sit directly in
// an os::Queue<T> (no heap allocation, no pointers to task-local stack
// memory that could go stale between send and receive).
// ---------------------------------------------------------------------

enum class LogSeverity : uint8_t { LOG_INFO, LOG_WARNING, LOG_ERROR, LOG_CRITICAL };

struct LogEventMsg {
    LoggerCmd   cmd;                // LOG_EVENT / EXPORT_TO_USB / CANCEL_EXPORT
    LogSeverity severity;
    uint32_t    timestamp;          // seconds, from RTC
    char        tag[16];            // originating subsystem, e.g. "UART", "UPGRADE"
    char        message[96];
};

struct UpgradeMsg {
    UpgradeCmd cmd;
    char       filename[64];        // e.g. "/usb/firmware.bin"
};

struct UartTxMsg {
    UartCmd cmd;
    uint8_t payload[64];
    size_t  len;
};

// ---------------------------------------------------------------------
// Global queues / event group. Defined once in main.cpp, declared extern
// everywhere else. Each is an os:: type -- construction/creation is the
// only place a native RTOS object comes into existence, and that's
// hidden inside osal/*.cpp.
// ---------------------------------------------------------------------

extern os::Queue<UpgradeMsg>     g_upgradeQueue;    // GUI          -> UsbUpgradeTask
extern os::Queue<LogEventMsg>    g_loggerQueue;     // GUI/any task -> LoggerTask
extern os::Queue<UartTxMsg>      g_uartTxQueue;     // GUI/any task -> UartCommTask
extern os::Queue<AppStatusEvent> g_guiEventQueue;   // any task     -> GuiTask

extern os::EventGroup g_sysEventGroup;
constexpr os::EventBits BIT_USB_BUS_BUSY   = (1u << 0);
constexpr os::EventBits BIT_UART_PEER_LINK = (1u << 1);
