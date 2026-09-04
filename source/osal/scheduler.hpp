#pragma once
//
// osal/scheduler.hpp
//
namespace os {
namespace scheduler {

    // Starts the RTOS scheduler. Never returns on success; only returns
    // if the scheduler itself fails to start (e.g. out of heap for the
    // idle/timer task control blocks).
    void start();

} // namespace scheduler
} // namespace os
