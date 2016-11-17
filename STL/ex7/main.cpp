#include <iostream>
#include <forward_list>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::forward_list<int> flist{1,2,3,4,5,6,7};

    auto iter1 = std::begin(flist);
    auto iter2 = std::end(flist);

    std::cout << std::distance(iter1, iter2) << std::endl;

    std::advance(iter1, 4);

    std::cout << (*iter1) << std::endl;
    std::cout << std::distance(std::begin(flist), iter1) << std::endl;

    return 0;
}
