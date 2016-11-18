#include <iostream>
#include <array>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::array<int, 1000> numbers;
    int n=1;
    std::generate(numbers.begin(), numbers.end(), [&n](){return ++n;});

    return 0;
}
