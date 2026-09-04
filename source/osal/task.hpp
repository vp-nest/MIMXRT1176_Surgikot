#pragma once
//
// osal/task.hpp
// Base class for every application task. Subclasses implement run() (the
// task body, an infinite loop that must never return) and optionally
// init() (one-time setup that must happen in task context). Construction
// never touches the RTOS -- start() is what actually creates the native
// task.
//
#include "osal/priority.hpp"
#include "osal/stack_size.hpp"

namespace os {

class Task {
public:
    Task(const char* name, StackSize stackSize, Priority priority)
        : m_name(name), m_stackSize(stackSize), m_priority(priority) {}
    virtual ~Task() = default;

    Task(const Task&) = delete;
    Task& operator=(const Task&) = delete;

    bool start();
    const char* name() const { return m_name; }

    // Entry point type for tasks that aren't modeled as a Task subclass
    // at all -- e.g. a vendor SDK's own task function such as
    // USB_HostTask. Application/integration code should still go through
    // this rather than calling the native task-create API directly, so
    // this stays the single place a raw OS task can come into existence.
    using RawEntryFn = void (*)(void*);
    static bool createRaw(const char* name, RawEntryFn entry, void* param,
                          StackSize stackSize, Priority priority);

protected:
    // The task body. Must contain the infinite loop and must never return.
    virtual void run() = 0;

    // Runs once, in task context, immediately before run(). Use it for
    // anything that has to happen after the scheduler is live (a first
    // filesystem mount, peripheral init that needs task context, etc.)
    // rather than in a global/static constructor.
    virtual void init() {}

private:
    static void trampoline(void* pv);

    const char* m_name;
    StackSize   m_stackSize;
    Priority    m_priority;
    void*       m_handle = nullptr;
};

} // namespace os
