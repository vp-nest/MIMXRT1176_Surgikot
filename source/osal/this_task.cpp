//
// osal/this_task.cpp
//

#include "osal/this_task.hpp"

extern "C" {
#include "FreeRTOS.h"
#include "task.h"
}

namespace os {
namespace this_task {

void sleepFor(Duration d) {
    TickType_t ticks = d.isForever() ? portMAX_DELAY : pdMS_TO_TICKS(d.rawMilliseconds());
    vTaskDelay(ticks);
}

void yield() {
    taskYIELD();
}

} // namespace this_task
} // namespace os