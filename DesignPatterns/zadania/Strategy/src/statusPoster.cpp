#include "statusPoster.hpp"

StatusPoster::StatusPoster(std::shared_ptr<IService> service) :
    service(service)
{}

void StatusPoster::post(const std::string& message)
{
    this->service->postStatus(message);
}
