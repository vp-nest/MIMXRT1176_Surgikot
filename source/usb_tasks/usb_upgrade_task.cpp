#include "usb_upgrade_task.hpp"
#include "usb_host_manager.hpp"
#include "osal/this_task.hpp"
#include "osal/mutex.hpp"
#include <cstdio>
#include <cstdarg>
#include <cstring>

void UsbUpgradeTask::run() {
    UpgradeMsg msg;
    for (;;) {
        if (g_upgradeQueue.receive(msg, os::Duration::milliseconds(10))) { // default timeout: forever
            if (msg.cmd == UpgradeCmd::START_FROM_USB) {
                handleStart(msg);
            }
            // CANCEL: with a single-shot synchronous flow like this, a
            // cancel request mainly needs a shared "abort requested" flag
            // checked inside flashImage()'s copy loop. Omitted here for
            // brevity but flagged as a required addition before shipping.
        }
        // Sleep briefly when idle to yield CPU time to other tasks
        os::this_task::sleepFor(os::Duration::milliseconds(50));
    }
}

void UsbUpgradeTask::handleStart(const UpgradeMsg& msg) {
    reportStatus(AppEventStatus::STARTED, 0);
    logEvent(LogSeverity::LOG_INFO, "Upgrade requested: %s", msg.filename);

    os::MutexGuard lock(UsbHostManager::instance().sessionMutex(), os::Duration::milliseconds(2000));
    if (!lock.ok()) {
        reportStatus(AppEventStatus::FAILURE, 0, -1);
        logEvent(LogSeverity::LOG_ERROR, "USB bus busy, upgrade aborted");
        return;
    }

    bool ok = UsbHostManager::instance().mount();

    if (ok) ok = verifyImage(msg.filename);
    if (ok) ok = flashImage(msg.filename);

    UsbHostManager::instance().unmount();
    // MutexGuard releases the session mutex automatically on return.

    if (ok) {
        reportStatus(AppEventStatus::SUCCESS, 100);
        logEvent(LogSeverity::LOG_INFO, "Upgrade OK, scheduling reboot");
        // Set the "pending swap" flag the bootloader checks on next reset,
        // e.g. write to a small metadata sector shared with the bootloader,
        // then reset the MCU (also to be routed through an osal
        // os::system::reset()-style call rather than NVIC_SystemReset()
        // directly, if/when a reset is needed here).
    } else {
        reportStatus(AppEventStatus::FAILURE, 0, -2);
        logEvent(LogSeverity::LOG_ERROR, "Upgrade failed: %s", msg.filename);
    }
}

bool UsbUpgradeTask::verifyImage(const char* path) {
    // Read the image header from USB, check magic number, target-board ID,
    // version, and a CRC32 (or better, an ECDSA/RSA signature) over the
    // payload before a single byte of on-chip flash is touched.
    reportStatus(AppEventStatus::PROGRESS, 20);
    (void)path;
    return true; // placeholder
}

bool UsbUpgradeTask::flashImage(const char* path) {
    // Stream the file from the USB MSC volume in fixed-size chunks
    // (e.g. 4 KB) into the currently-inactive flash bank so the running
    // image is never overwritten -- classic A/B / dual-bank upgrade.
    // Report progress every N chunks so the GUI progress bar moves.
    (void)path;
    for (uint8_t pct = 30; pct <= 90; pct += 10) {
        reportStatus(AppEventStatus::PROGRESS, pct);
        os::this_task::sleepFor(os::Duration::milliseconds(50)); // placeholder for real flash timing
    }
    return true; // placeholder
}

void UsbUpgradeTask::reportStatus(AppEventStatus status, uint8_t percent, int32_t err) {
    AppStatusEvent evt{ AppEventSource::UPGRADE_TASK, status, percent, err };
    g_guiEventQueue.send(evt); // default timeout: zero, never block on the GUI
}

void UsbUpgradeTask::logEvent(LogSeverity sev, const char* fmt, ...) {
    LogEventMsg msg{};
    msg.cmd = LoggerCmd::LOG_EVENT;
    msg.severity = sev;
    std::strncpy(msg.tag, "UPGRADE", sizeof(msg.tag) - 1);
    va_list args;
    va_start(args, fmt);
    vsnprintf(msg.message, sizeof(msg.message), fmt, args);
    va_end(args);
    g_loggerQueue.send(msg);
}
