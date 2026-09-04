#pragma once
//
// osal/stack_size.hpp
// Strong type over an RTOS task's stack allocation. FreeRTOS's own
// configSTACK_DEPTH_TYPE is measured in words on the Cortex-M ports this
// project targets -- StackSize::words() makes that unit explicit at every
// call site instead of a bare, ambiguous integer.
//
#include <cstdint>

namespace os {

class StackSize {
public:
    static constexpr StackSize words(uint32_t count) { return StackSize(count); }

    constexpr uint32_t wordCount() const { return m_words; }

private:
    constexpr explicit StackSize(uint32_t words) : m_words(words) {}
    uint32_t m_words;
};

} // namespace os
