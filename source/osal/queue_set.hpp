#pragma once
//
// osal/queue_set.hpp
// Lets a task block on several waitable osal primitives (Queue<T>,
// BinarySemaphore) at once instead of polling each one. Mirrors what a
// FreeRTOS queue set does, without exposing QueueSetHandle_t or
// QueueSetMemberHandle_t to application code.
//
#include <cstddef>
#include "osal/duration.hpp"

namespace os {

// Interface implemented by every osal primitive that can be added to a
// QueueSet. Application code never calls nativeHandle()/addToNativeSet()
// directly -- they exist purely for QueueSet's own bookkeeping.
class QueueSetMember {
public:
    virtual ~QueueSetMember() = default;

protected:
    friend class QueueSet;
    virtual void* nativeHandle() const = 0;
    virtual bool  addToNativeSet(void* nativeSetHandle) const = 0;
};

class QueueSet {
public:
    QueueSet() = default;
    ~QueueSet();

    QueueSet(const QueueSet&) = delete;
    QueueSet& operator=(const QueueSet&) = delete;

    // totalSlots should be at least the sum of the depths of every queue
    // added (a semaphore counts as 1), matching FreeRTOS's own queue set
    // sizing rule.
    bool create(size_t totalSlots);

    bool add(QueueSetMember& member);

    // Blocks until one of the added members becomes ready, or the
    // timeout elapses. Returns nullptr on timeout, otherwise a pointer to
    // whichever member you passed to add() -- compare it by address.
    QueueSetMember* select(Duration timeout = Duration::forever());

private:
    static constexpr size_t kMaxMembers = 8;

    void*           m_setHandle = nullptr;
    QueueSetMember* m_members[kMaxMembers] = {};
    size_t          m_memberCount = 0;
};

} // namespace os
