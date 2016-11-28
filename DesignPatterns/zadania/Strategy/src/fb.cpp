#include "fb.hpp"
#include <iostream>

void Fb::postStatus(const std::string& status)
{
    std::cout << "Posted to FB: " << status << std::endl;
}

