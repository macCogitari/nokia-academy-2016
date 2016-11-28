#pragma once

#include "IService.hpp"

class Twitter : public IService
{
public:
    Twitter() = default;
    virtual ~Twitter() = default;

    void postStatus(const std::string& status) override;
};
