#include "twitter.hpp"
#include <iostream>

void Twitter::postStatus(const std::string& status)
{
    std::cout << "Posted to Twitter: " << status << std::endl;
}

