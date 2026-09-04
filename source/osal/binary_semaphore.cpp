//
// osal/binary_semaphore.cpp
//

#include "osal/binary_semaphore.hpp"

extern "C" {
#include "FreeRTOS.h"
#include "semphr.h"
#include "queue.h"
}

namespace os {

BinarySemaphore::BinarySemaphore() {
    m_handle = xSemaphoreCreateBinary();
}

BinarySemaphore::~BinarySemaphore() {
    if (m_handle != nullptr) {
        vSemaphoreDelete(static_cast<SemaphoreHandle_t>(m_handle));
        m_handle = nullptr;
    }
}

bool BinarySemaphore::take(Duration timeout) {
    if (m_handle == nullptr) {
        return false;
    }

    TickType_t ticks = timeout.isForever() ? portMAX_DELAY : pdMS_TO_TICKS(timeout.rawMilliseconds());
    return xSemaphoreTake(static_cast<SemaphoreHandle_t>(m_handle), ticks) == pdTRUE;
}

void BinarySemaphore::give() {
    if (m_handle != nullptr) {
        xSemaphoreGive(static_cast<SemaphoreHandle_t>(m_handle));
    }
}

void BinarySemaphore::giveFromISR() {
    if (m_handle == nullptr) {
        return;
    }

    BaseType_t higherPriorityTaskWoken = pdFALSE;
    xSemaphoreGiveFromISR(static_cast<SemaphoreHandle_t>(m_handle), &higherPriorityTaskWoken);

#if defined(portYIELD_FROM_ISR)
    portYIELD_FROM_ISR(higherPriorityTaskWoken);
#elif defined(portEND_SWITCHING_ISR)
    portEND_SWITCHING_ISR(higherPriorityTaskWoken);
#endif
}

void* BinarySemaphore::nativeHandle() const {
    return m_handle;
}

bool BinarySemaphore::addToNativeSet(void* nativeSetHandle) const {
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