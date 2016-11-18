#include <iostream>

#include <functional>

int main(int argc, char *argv[])
{

    std::function<int(int)> fiveTimes = std::bind(std::multiplies<int>(), 5, std::placeholders::_1);

    std::cout << fiveTimes(11) << std::endl;

    std::function<int(int)> fiveTimesLamda = [=](int n){return n*5;};

    std::cout << fiveTimesLamda(11) << std::endl;


    return 0;
}
