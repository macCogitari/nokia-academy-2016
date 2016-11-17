#include <iostream>
#include <iterator>
#include <array>

//using namespace std;

template <class T, std::size_t N>
std::ostream& operator<<(std::ostream& o, const std::array<T, N>& arr)
{
    std::copy(arr.cbegin(), arr.cend(), std::ostream_iterator<T>(o, " "));
    return o;
}

int main(int argc, char *argv[])
{
    constexpr int size = 10;
    std::array<int, size> myArr;
    myArr.fill(5);

    myArr.at(3) = 3;

    std::array<int, size> secondArray{};

    myArr.swap(secondArray);

    std::cout << myArr << std::endl;
    std::cout << secondArray << std::endl;

    return 0;
}
