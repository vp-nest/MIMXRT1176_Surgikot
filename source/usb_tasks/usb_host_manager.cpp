#include <app_priorities.hpp>
#include "usb_host_manager.hpp"
#include "osal/task.hpp"

// ---------------------------------------------------------------------
// Integration with NXP MCUXpresso USB host C API (from app.c)
// ---------------------------------------------------------------------
extern "C" {
    typedef int   usb_status_t;
    typedef void* usb_device_handle;
    typedef void* usb_host_configuration_handle;

    constexpr uint32_t kUSB_HostEventEnumerationDone = 3;
    constexpr uint32_t kUSB_HostEventDetach = 2;

    // Functions defined in app.c
    void USB_HostApplicationInit(void);
    void USB_HostTaskFn(void* hostHandle);
    void USB_HostApplicationTaskFn(void* hostHandle);

    // Global host handle defined in app.c
    extern void* g_HostHandle;

    // C-linkage bridge function called from app.c's USB_HostEvent callback
    void UsbHostManager_OnEvent(uint32_t eventCode) {
        switch (eventCode & 0x0000FFFFU) {
            case kUSB_HostEventEnumerationDone:
                UsbHostManager::instance().onHostStackEvent(UsbHostEvent::DEVICE_ATTACHED);
                break;
            case kUSB_HostEventDetach:
                UsbHostManager::instance().onHostStackEvent(UsbHostEvent::DEVICE_DETACHED);
                break;
            default:
                break;
        }
    }
}

// FreeRTOS task wrappers using C linkage
extern "C" void USB_HostTask(void* param) {
    for (;;) {
        USB_HostTaskFn(param);
    }
}

extern "C" void USB_HostApplicationTask(void* param) {
    for (;;) {
        USB_HostApplicationTaskFn(param);
    }
}

bool UsbHostManager::init() {
    if (!m_eventQueue.create(4)) {
        return false;
    }

    // Initialize clock, sysmpu, host stack, and IRQ via app.c
    USB_HostApplicationInit();
    m_hostHandle = g_HostHandle;

    if (m_hostHandle == nullptr) {
        return false;
    }

    bool ok1 = os::Task::createRaw("USBHostTask", &USB_HostTask, m_hostHandle,
                                    app::stack::kUsbHostVendorTask, app::priority::kUsbHostTask);
    bool ok2 = os::Task::createRaw("USBHostAppTask", &USB_HostApplicationTask, m_hostHandle,
                                    app::stack::kUsbHostVendorTask, app::priority::kUsbHostApplicationTask);

    return ok1 && ok2;
}

void UsbHostManager::onHostStackEvent(UsbHostEvent evt) {
    m_eventQueue.send(evt);
}

bool UsbHostManager::mount(os::Duration attachTimeout) {
    UsbHostEvent evt;
    while (m_eventQueue.receive(evt, os::Duration::zero())) {
        // discarded stale events
    }

    if (!m_eventQueue.receive(evt, attachTimeout) || evt != UsbHostEvent::DEVICE_ATTACHED) {
        return false;
    }

    m_mounted = true;
    return m_mounted;
}

void UsbHostManager::unmount() {
    m_mounted = false;
}

bool UsbHostManager::readFile(const char* path, uint8_t* buf, size_t bufLen, size_t& outLen) {
    (void)path; (void)buf; (void)bufLen;
    outLen = 0;
    return m_mounted;
}

bool UsbHostManager::writeFile(const char* path, const uint8_t* buf, size_t len, bool append) {
    (void)path; (void)buf; (void)len; (void)append;
    return m_mounted;
}

bool UsbHostManager::exists(const char* path) {
    (void)path;
    return m_mounted;
}
