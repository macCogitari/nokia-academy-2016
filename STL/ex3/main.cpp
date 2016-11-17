#include <iostream>

#include <vector>

int main(int argc, char *argv[])
{

    std::vector<int> vec{};
    std::cout << "std::vector<int> vec{};" << std::endl;
    std::cout << "size: " << vec.size() << std::endl;
    std::cout << "capacity: " << vec.capacity() << std::endl << std::endl;

    vec.resize(10, 5);
    std::cout << "vec.resize(10, 5);" << std::endl;
    std::cout << "size: " << vec.size() << std::endl;
    std::cout << "capacity: " << vec.capacity() << std::endl << std::endl;

    vec.reserve(20);
    std::cout << "vec.reserve(20);" << std::endl;
    std::cout << "size: " << vec.size() << std::endl;
    std::cout << "capacity: " << vec.capacity() << std::endl << std::endl;

    vec.shrink_to_fit();
    std::cout << "vec.shrink_to_fit();" << std::endl;
    std::cout << "size: " << vec.size() << std::endl;
    std::cout << "capacity: " << vec.capacity() << std::endl << std::endl;

    return 0;
}
