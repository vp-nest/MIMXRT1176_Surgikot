//
// osal/queue_set.cpp
//

#include "osal/queue_set.hpp"

extern "C" {
#include "FreeRTOS.h"
#include "queue.h"
}

namespace os {

QueueSet::~QueueSet() {
    if (m_setHandle != nullptr) {
        vQueueDelete(static_cast<QueueSetHandle_t>(m_setHandle));
        m_setHandle = nullptr;
    }
}

bool QueueSet::create(size_t totalSlots) {
#if (configUSE_QUEUE_SETS == 1)
    m_setHandle = xQueueCreateSet(static_cast<UBaseType_t>(totalSlots));
    return m_setHandle != nullptr;
#else
    (void)totalSlots;
    return false;
#endif
}

bool QueueSet::add(QueueSetMember& member) {
    if (m_setHandle == nullptr || m_memberCount >= kMaxMembers) {
        return false;
    }

    if (member.addToNativeSet(m_setHandle)) {
        m_members[m_memberCount++] = &member;
        return true;
    }

    return false;
}

QueueSetMember* QueueSet::select(Duration timeout) {
    if (m_setHandle == nullptr) {
        return nullptr;
    }

#if (configUSE_QUEUE_SETS == 1)
    TickType_t ticks = timeout.isForever() ? portMAX_DELAY : pdMS_TO_TICKS(timeout.rawMilliseconds());
    QueueSetMemberHandle_t activatedHandle = xQueueSelectFromSet(
        static_cast<QueueSetHandle_t>(m_setHandle),
        ticks
    );

    if (activatedHandle == nullptr) {
        return nullptr;
    }

    // Find which registered member matches the returned native handle
    for (size_t i = 0; i < m_memberCount; ++i) {
        if (m_members[i] != nullptr && m_members[i]->nativeHandle() == activatedHandle) {
            return m_members[i];
        }
    }
#else
    (void)timeout;
#endif

    return nullptr;
}

} // namespace os