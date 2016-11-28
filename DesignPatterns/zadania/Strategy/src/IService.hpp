#pragma once

#include <string>

class IService
{
public:
    IService() = default;
    virtual ~IService() = default;

    virtual void postStatus(const std::string& status) = 0;
};
