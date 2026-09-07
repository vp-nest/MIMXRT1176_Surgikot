#pragma once
//
// app_priorities.hpp
// Central place for every task's priority and stack size, so the ladder
// documented in README.md lives in exactly one spot instead of being
// scattered as magic numbers across each task's constructor.
//
// configMAX_PRIORITIES must be at least 8 for this ladder to fit
// (see README.md for the full rationale).
//
#include "osal/priority.hpp"
#include "osal/stack_size.hpp"

namespace app {
namespace priority {

    // Vendor USB host stack tasks (created by UsbHostManager::init(),
    // not modeled as app::Task subclasses) sit above every app task:
    // a delay servicing the controller can fail an enumeration or
    // transfer outright, which has to preempt everything else.
    constexpr os::Priority kUsbHostTask            = os::Priority(7);
    constexpr os::Priority kUsbHostApplicationTask = os::Priority(6);

    constexpr os::Priority kUartComm  = os::Priority(5);
    constexpr os::Priority kUsbUpgrade = os::Priority(4);
    constexpr os::Priority kLogger     = os::Priority(3);
    constexpr os::Priority kGui        = os::Priority(3);

} // namespace priority

namespace stack {

    constexpr os::StackSize kUsbHostVendorTask = os::StackSize::words(1024);
    constexpr os::StackSize kUartComm          = os::StackSize::words(2048);
    constexpr os::StackSize kUsbUpgrade        = os::StackSize::words(2048);
    constexpr os::StackSize kLogger            = os::StackSize::words(2048);
    constexpr os::StackSize kGui               = os::StackSize::words(8048);

} // namespace stack
} // namespace app
