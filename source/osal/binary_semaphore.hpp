#pragma once
//
// osal/binary_semaphore.hpp
// Primarily used for ISR-to-task signalling (e.g. "new UART RX data is
// ready"). giveFromISR() hides the higher-priority-task-woken/yield
// bookkeeping a raw ISR would otherwise have to do itself -- an ISR
// written against this abstraction never touches a native RTOS type.
//
#include "osal/duration.hpp"
#include "osal/queue_set.hpp"

namespace os {

class BinarySemaphore : public QueueSetMember {
public:
    BinarySemaphore();
    ~BinarySemaphore();

    BinarySemaphore(const BinarySemaphore&) = delete;
    BinarySemaphore& operator=(const BinarySemaphore&) = delete;

    bool take(Duration timeout = Duration::forever());
    void give();
    void giveFromISR();

private:
    void* nativeHandle() const override;
    bool  addToNativeSet(void* nativeSetHandle) const override;

    void* m_handle = nullptr;
};

} // namespace os
