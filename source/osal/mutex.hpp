#pragma once
//
// osal/mutex.hpp
//
#include "osal/duration.hpp"

namespace os {

class Mutex {
public:
    Mutex();
    ~Mutex();

    Mutex(const Mutex&) = delete;
    Mutex& operator=(const Mutex&) = delete;

    bool lock(Duration timeout = Duration::forever());
    void unlock();

private:
    void* m_handle = nullptr;
};

// RAII scope guard, analogous to std::lock_guard, for os::Mutex.
// `MutexGuard g(myMutex, timeout); if (!g.ok()) return;`
class MutexGuard {
public:
    explicit MutexGuard(Mutex& mutex, Duration timeout = Duration::forever())
        : m_mutex(mutex), m_locked(mutex.lock(timeout)) {}
    ~MutexGuard() { if (m_locked) m_mutex.unlock(); }

    bool ok() const { return m_locked; }

    MutexGuard(const MutexGuard&) = delete;
    MutexGuard& operator=(const MutexGuard&) = delete;

private:
    Mutex& m_mutex;
    bool   m_locked;
};

} // namespace os
