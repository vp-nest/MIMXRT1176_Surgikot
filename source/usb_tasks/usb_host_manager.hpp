#pragma once
//
// usb_host_manager.hpp
//
// The MCUXpresso USB host stack is NOT a passive library you call into --
// it runs its own two FreeRTOS tasks, created once at boot:
//
//   USB_HostTask            Pumps the host controller driver (EHCI/OHCI).
//                            Must run at a priority high enough to service
//                            the controller promptly -- this is the stack's
//                            equivalent of an interrupt bottom half.
//
//   USB_HostApplicationTask  Delivers attach/detach/enumeration-done events
//                            up to the application via the USB_HostEvent()
//                            callback the app registers with USB_HostInit().
//                            Runs at a lower priority than USB_HostTask but
//                            still above the tasks that merely consume USB
//                            data (our UsbUpgradeTask / LoggerTask).
//
// UsbHostManager therefore does NOT talk to the controller directly. It
// (1) starts the stack and its two tasks once, at boot, via
//     os::Task::createRaw() (never a raw xTaskCreate call), and
// (2) exposes a small os::Queue<UsbHostEvent> that USB_HostEvent() feeds,
//     so mount() can synchronously wait for "MSC device attached" instead
//     of the app having to know anything about the stack's internal task
//     structure.
//
// The upgrade/export mutex below is still needed on top of all this: the
// stack lets exactly one class-driver session use the MSC device at a
// time, and UsbUpgradeTask / LoggerTask must not both try to drive it
// concurrently. It's an os::Mutex, exposed directly so callers build a
// plain os::MutexGuard around it rather than this class re-exposing its
// own acquire()/release() pair.
//
#include "osal/duration.hpp"
#include "osal/mutex.hpp"
#include "osal/queue.hpp"
#include <cstdint>
#include <cstddef>

// Opaque handle type from the vendor USB host stack (usb_host.h's
// usb_host_handle), forward-declared as void* so this header doesn't
// need to include any vendor or RTOS header.
using UsbHostNativeHandle = void*;

enum class UsbHostEvent : uint8_t {
    DEVICE_ATTACHED,
    DEVICE_DETACHED,
};

class UsbHostManager {
public:
    static UsbHostManager& instance() {
        static UsbHostManager inst;
        return inst;
    }

    // Called once from main(), before the scheduler starts servicing any
    // app task that might call mount(). Initializes the host stack via
    // USB_HostApplicationInit(), creates USB_HostTask and
    // USB_HostApplicationTask via os::Task::createRaw().
    bool init();

    // Exclusive session for one caller (UsbUpgradeTask xor LoggerTask) at
    // a time: `os::MutexGuard lock(UsbHostManager::instance().sessionMutex());`
    os::Mutex& sessionMutex() { return m_sessionMutex; }

    // Waits (with timeout) for a DEVICE_ATTACHED event from the stack,
    // then binds a filesystem on top of the enumerated MSC volume.
    bool mount(os::Duration attachTimeout = os::Duration::milliseconds(3000));
    void unmount();

    // Whole/streamed-file helpers used by the upgrade/export flows.
    bool readFile(const char* path, uint8_t* buf, size_t bufLen, size_t& outLen);
    bool writeFile(const char* path, const uint8_t* buf, size_t len, bool append);
    bool exists(const char* path);

    // Invoked via C-linkage bridge when stack events occur.
    void onHostStackEvent(UsbHostEvent evt);

private:
    UsbHostManager() = default;

    os::Mutex               m_sessionMutex;
    os::Queue<UsbHostEvent> m_eventQueue;
    UsbHostNativeHandle     m_hostHandle = nullptr;
    bool                    m_mounted    = false;
};
