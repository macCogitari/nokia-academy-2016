#pragma once

#include <memory>
#include <string>
#include "IService.hpp"

class StatusPoster
{
public:
    StatusPoster(std::shared_ptr<IService> service);
    ~StatusPoster() = default;

    void post(const std::string& message);
private:
    std::shared_ptr<IService> service;
};
