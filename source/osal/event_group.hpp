#pragma once
//
// osal/event_group.hpp
//
#include <cstdint>
#include "osal/duration.hpp"

namespace os {

using EventBits = uint32_t;

class EventGroup {
public:
    EventGroup();
    ~EventGroup();

    EventGroup(const EventGroup&) = delete;
    EventGroup& operator=(const EventGroup&) = delete;

    void setBits(EventBits bits);
    void clearBits(EventBits bits);

    // Waits for bitsToWaitFor according to waitForAll, optionally clearing
    // them on exit. Returns the bits that were set at the point this
    // returned (may include bits beyond bitsToWaitFor).
    EventBits waitBits(EventBits bitsToWaitFor, bool waitForAll, bool clearOnExit,
                        Duration timeout = Duration::forever());

private:
    void* m_handle = nullptr;
};

} // namespace os
