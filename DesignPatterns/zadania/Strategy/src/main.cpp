#include <iostream>
#include <string>
#include <memory>
#include "fb.hpp"
#include "twitter.hpp"
#include "medium.hpp"
#include "statusPoster.hpp"

int main(void)
{
    std::string status;
    std::cout << "Enter status message: ";
    std::cin >> status;

    {
        auto fb = std::make_shared<Fb>();
        StatusPoster sp(fb);
        sp.post(status);
    }
    {
        auto twitter = std::make_shared<Twitter>();
        StatusPoster sp(twitter);
        sp.post(status);
    }
    {
        auto medium = std::make_shared<Medium>();
        StatusPoster sp(medium);
        sp.post(status);
    }
    return 0;
}
