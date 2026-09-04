//
// osal/mutex.cpp
//

#include "osal/mutex.hpp"

extern "C" {
#include "FreeRTOS.h"
#include "semphr.h"
}

namespace os {

Mutex::Mutex() {
    m_handle = xSemaphoreCreateMutex();
}

Mutex::~Mutex() {
    if (m_handle != nullptr) {
        vSemaphoreDelete(static_cast<SemaphoreHandle_t>(m_handle));
        m_handle = nullptr;
    }
}

bool Mutex::lock(Duration timeout) {
    if (m_handle == nullptr) {
        return false;
    }

    TickType_t ticks = timeout.isForever() ? portMAX_DELAY : pdMS_TO_TICKS(timeout.rawMilliseconds());
    return xSemaphoreTake(static_cast<SemaphoreHandle_t>(m_handle), ticks) == pdTRUE;
}

void Mutex::unlock() {
    if (m_handle != nullptr) {
        xSemaphoreGive(static_cast<SemaphoreHandle_t>(m_handle));
    }
}

} // namespace os