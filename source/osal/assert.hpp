#pragma once
//
// osal/assert.hpp
//
namespace os {
namespace debug {

    // Halts (via the RTOS's own assert/fault hook) if condition is false.
    // Used at startup for conditions that must never fail on a working
    // board (queue/task creation, etc.) so a silent allocation failure
    // doesn't run the app in a half-initialized state.
    void assertTrue(bool condition);

} // namespace debug
} // namespace os
