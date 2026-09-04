#pragma once
//
// osal/priority.hpp
// Strong type over a native RTOS task priority level, so application code
// never passes a bare int (or a FreeRTOS UBaseType_t) into Task::start().
// Higher numeric value = higher priority, matching FreeRTOS's convention;
// a different port could reinterpret level() however it needs to.
//
#include <cstdint>

namespace os {

class Priority {
public:
    constexpr explicit Priority(uint32_t level) : m_level(level) {}
    constexpr uint32_t level() const { return m_level; }

private:
    uint32_t m_level;
};

} // namespace os
