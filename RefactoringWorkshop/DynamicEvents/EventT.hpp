#pragma once

#include <memory>

#include "Event.hpp"

template <class T>
class EventT : public Event
{
public:
    EventT(T const& payload = T())
        : m_payload(payload)
    {}

    std::unique_ptr<EventT> clone() const { return std::make_unique<EventT<T>>(m_payload); }

    std::uint32_t getMessageId() const override { return T::MESSAGE_ID; };

    T * const operator->() noexcept { return std::addressof(m_payload); }
    T const * const operator->() const noexcept { return std::addressof(m_payload); }

    T& operator*() noexcept { return m_payload; }
    T const& operator*() const noexcept { return m_payload; }

private:
    T m_payload;
};

template <class T>
T const& payload(Event const& p_evt)
{
    return *dynamic_cast<EventT<T> const&>(p_evt);
}

template <class T>
T& payload(Event& p_evt)
{
    return *dynamic_cast<EventT<T>&>(p_evt);
}
