#pragma once
//
// osal/this_task.hpp
// Operations a task performs on itself.
//
#include "osal/duration.hpp"

namespace os {
namespace this_task {

    void sleepFor(Duration d);
    void yield();

} // namespace this_task
} // namespace os
