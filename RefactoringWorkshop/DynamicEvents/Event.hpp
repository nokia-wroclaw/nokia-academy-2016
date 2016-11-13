#pragma once

#include <cstdint>

struct Event
{
    virtual ~Event() = default;

    virtual std::uint32_t getMessageId() const = 0;
};
