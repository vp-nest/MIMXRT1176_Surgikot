//
// osal/task.cpp
//

#include "osal/task.hpp"

extern "C" {
#include "FreeRTOS.h"
#include "task.h"
}

namespace os {

bool Task::start() {
    if (m_handle != nullptr) {
        return false;
    }

    BaseType_t result = xTaskCreate(
        trampoline,
        m_name,
        static_cast<configSTACK_DEPTH_TYPE>(m_stackSize.wordCount()),
        this,
        static_cast<UBaseType_t>(m_priority.level()),
        reinterpret_cast<TaskHandle_t*>(&m_handle)
    );

    return result == pdPASS;
}

bool Task::createRaw(const char* name, RawEntryFn entry, void* param,
                     StackSize stackSize, Priority priority) {
    TaskHandle_t rawHandle = nullptr;
    BaseType_t result = xTaskCreate(
        entry,
        name,
        static_cast<configSTACK_DEPTH_TYPE>(stackSize.wordCount()),
        param,
        static_cast<UBaseType_t>(priority.level()),
        &rawHandle
    );

    return result == pdPASS;
}

void Task::trampoline(void* pv) {
    Task* task = static_cast<Task*>(pv);
    if (task != nullptr) {
        task->init();
        task->run();
    }

    // A task must never return. If run() exits, clean up the task.
    vTaskDelete(nullptr);
}

} // namespace os