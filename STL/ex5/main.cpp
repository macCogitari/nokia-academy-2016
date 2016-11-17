#include <iostream>

#include <set>
#include <algorithm>

int main(int argc, char *argv[])
{

    std::set<int> _set;

    _set.emplace(9);

    _set.emplace(12);

    _set.emplace(15);

    _set.emplace(7);
    _set.emplace(3);

    _set.emplace(11);
    _set.emplace(10);


//    _set
    std::cout << std::distance(_set.begin(), _set.lower_bound(8)) << std::endl;
    std::cout << std::distance(_set.begin(), _set.upper_bound(8)) << std::endl;
    std::cout << std::distance(_set.begin(), _set.equal_range(8).second) << std::endl;
    return 0;
}
