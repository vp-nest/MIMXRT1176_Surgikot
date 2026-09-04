//
// osal/queue.cpp
//

#include "osal/queue.hpp"

extern "C" {
#include "FreeRTOS.h"
#include "queue.h"
}

namespace os {

QueueBase::~QueueBase() {
    if (m_handle != nullptr) {
        vQueueDelete(static_cast<QueueHandle_t>(m_handle));
        m_handle = nullptr;
    }
}

bool QueueBase::create(size_t capacity, size_t itemSize) {
    m_handle = xQueueCreate(capacity, itemSize);
    return m_handle != nullptr;
}

bool QueueBase::send(const void* item, Duration timeout) {
    if (m_handle == nullptr) {
        return false;
    }

    TickType_t ticks = timeout.isForever() ? portMAX_DELAY : pdMS_TO_TICKS(timeout.rawMilliseconds());
    return xQueueSend(static_cast<QueueHandle_t>(m_handle), item, ticks) == pdPASS;
}

bool QueueBase::sendFromISR(const void* item) {
    if (m_handle == nullptr) {
        return false;
    }

    BaseType_t higherPriorityTaskWoken = pdFALSE;
    BaseType_t result = xQueueSendFromISR(static_cast<QueueHandle_t>(m_handle), item, &higherPriorityTaskWoken);

#if defined(portYIELD_FROM_ISR)
    portYIELD_FROM_ISR(higherPriorityTaskWoken);
#elif defined(portEND_SWITCHING_ISR)
    portEND_SWITCHING_ISR(higherPriorityTaskWoken);
#endif

    return result == pdPASS;
}

bool QueueBase::receive(void* item, Duration timeout) {
    if (m_handle == nullptr) {
        return false;
    }

    TickType_t ticks = timeout.isForever() ? portMAX_DELAY : pdMS_TO_TICKS(timeout.rawMilliseconds());
    return xQueueReceive(static_cast<QueueHandle_t>(m_handle), item, ticks) == pdPASS;
}

bool QueueBase::addToSet(void* nativeSetHandle) const {
    if (m_handle == nullptr || nativeSetHandle == nullptr) {
        return false;
    }

#if (configUSE_QUEUE_SETS == 1)
    return xQueueAddToSet(
        static_cast<QueueSetMemberHandle_t>(m_handle),
        static_cast<QueueSetHandle_t>(nativeSetHandle)
    ) == pdPASS;
#else
    return false;
#endif
}

} // namespace os