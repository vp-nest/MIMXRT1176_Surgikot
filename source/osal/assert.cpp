//
// osal/assert.cpp
//

#include "osal/assert.hpp"

extern "C" {
#include "FreeRTOS.h"
#include "task.h"
}

namespace os {
namespace debug {

void assertTrue(bool condition) {
    if (!condition) {
        portDISABLE_INTERRUPTS();
        for (;;) {
            // Halt execution on assertion failure
        }
    }
}

} // namespace debug
} // namespace os