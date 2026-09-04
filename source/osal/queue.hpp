#pragma once
//
// osal/queue.hpp
// Type-safe, fixed-capacity message queue of T. Items are copied by value
// into/out of the native queue, exactly like a plain FreeRTOS queue.
//
// QueueBase is a non-template class specifically so no FreeRTOS handle
// type ever has to appear in this header-only template's public
// interface: all native calls live in osal/queue.cpp, and Queue<T> is a
// thin, type-safe wrapper over QueueBase's opaque void* handle.
//
#include <cstddef>
#include "osal/duration.hpp"
#include "osal/queue_set.hpp"

namespace os {

class QueueBase {
public:
    QueueBase() = default;
    ~QueueBase();

    QueueBase(const QueueBase&) = delete;
    QueueBase& operator=(const QueueBase&) = delete;

    bool create(size_t capacity, size_t itemSize);

    bool send(const void* item, Duration timeout);
    bool sendFromISR(const void* item);
    bool receive(void* item, Duration timeout);

    // For QueueSet's internal bookkeeping only.
    bool addToSet(void* nativeSetHandle) const;

protected:
    void* rawHandle() const { return m_handle; }

private:
    void* m_handle = nullptr;
};

template <typename T>
class Queue : public QueueBase, public QueueSetMember {
public:
    bool create(size_t capacity) { return QueueBase::create(capacity, sizeof(T)); }

    bool send(const T& item, Duration timeout = Duration::zero()) {
        return QueueBase::send(&item, timeout);
    }
    bool sendFromISR(const T& item) { return QueueBase::sendFromISR(&item); }
    bool receive(T& item, Duration timeout = Duration::forever()) {
        return QueueBase::receive(&item, timeout);
    }

private:
    void* nativeHandle() const override { return QueueBase::rawHandle(); }
    bool  addToNativeSet(void* nativeSetHandle) const override {
        return QueueBase::addToSet(nativeSetHandle);
    }
};

} // namespace os
