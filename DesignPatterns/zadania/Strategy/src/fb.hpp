#pragma once

#include "IService.hpp"

class Fb : public IService
{
public:
    Fb() = default;
    virtual ~Fb() = default;

    void postStatus(const std::string& status) override;
};
