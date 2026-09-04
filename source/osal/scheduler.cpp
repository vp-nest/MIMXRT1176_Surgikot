//
// osal/scheduler.cpp
//

#include "osal/scheduler.hpp"

extern "C" {
#include "FreeRTOS.h"
#include "task.h"
}

namespace os {
namespace scheduler {

void start() {
    vTaskStartScheduler();
}

} // namespace scheduler
} // namespace os