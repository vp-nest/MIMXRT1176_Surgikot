#pragma once
//
// osal/duration.hpp
// Strong type over a blocking timeout/delay. Application code never hands
// a bare tick count to an osal primitive, and never calls pdMS_TO_TICKS
// itself -- the conversion to native ticks happens exactly once, inside
// the osal .cpp implementation files (see osal/detail/ticks.hpp).
//
#include <cstdint>

namespace os {

class Duration {
public:
    static constexpr Duration zero() { return Duration(0); }
    static constexpr Duration milliseconds(uint32_t ms) { return Duration(ms); }
    static constexpr Duration forever() { return Duration(kForeverSentinel); }

    constexpr bool isForever() const { return m_ms == kForeverSentinel; }

    // osal-internal: only osal/detail/ticks.* should ever call this: it's
    // how a Duration becomes a native tick count. Application code has no
    // reason to read the raw millisecond value back out.
    constexpr uint32_t rawMilliseconds() const { return m_ms; }

private:
    static constexpr uint32_t kForeverSentinel = 0xFFFFFFFFu;
    constexpr explicit Duration(uint32_t ms) : m_ms(ms) {}
    uint32_t m_ms;
};

} // namespace os
