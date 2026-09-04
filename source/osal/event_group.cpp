//
// osal/event.cpp
//

#include "osal/event_group.hpp"

extern "C" {
#include "FreeRTOS.h"
#include "event_groups.h"
}

namespace os {

EventGroup::EventGroup() {
    m_handle = xEventGroupCreate();
}

EventGroup::~EventGroup() {
    if (m_handle != nullptr) {
        vEventGroupDelete(static_cast<EventGroupHandle_t>(m_handle));
        m_handle = nullptr;
    }
}

void EventGroup::setBits(EventBits bits) {
    if (m_handle != nullptr) {
        xEventGroupSetBits(static_cast<EventGroupHandle_t>(m_handle), static_cast<EventBits_t>(bits));
    }
}

void EventGroup::clearBits(EventBits bits) {
    if (m_handle != nullptr) {
        xEventGroupClearBits(static_cast<EventGroupHandle_t>(m_handle), static_cast<EventBits_t>(bits));
    }
}

EventBits EventGroup::waitBits(EventBits bitsToWaitFor, bool waitForAll, bool clearOnExit, Duration timeout) {
    if (m_handle == nullptr) {
        return 0;
    }

    TickType_t ticks = timeout.isForever() ? portMAX_DELAY : pdMS_TO_TICKS(timeout.rawMilliseconds());
    
    EventBits_t result = xEventGroupWaitBits(
        static_cast<EventGroupHandle_t>(m_handle),
        static_cast<EventBits_t>(bitsToWaitFor),
        clearOnExit ? pdTRUE : pdFALSE,
        waitForAll ? pdTRUE : pdFALSE,
        ticks
    );

    return static_cast<EventBits>(result);
}

} // namespace os