#include <iostream>
#include <iterator>
#include <array>

using namespace std;

template <class T, std::size_t N>
ostream& operator<<(ostream& o, const array<T, N>& arr)
{
    copy(arr.cbegin(), arr.cend(), ostream_iterator<T>(o, " "));
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

    cout << myArr << endl;
    cout << secondArray << endl;

    return 0;
}
