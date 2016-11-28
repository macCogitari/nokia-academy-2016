#pragma once

#include "IService.hpp"

class Medium : public IService
{
public:
    Medium() = default;
    virtual ~Medium() = default;

    void postStatus(const std::string& status) override;
};
