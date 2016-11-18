#include <iostream>

#include <vector>
#include <algorithm>
#include <iterator>

int main(int argc, char *argv[])
{

    std::vector<int> numbers(10);

    int n={0};
    std::generate(numbers.begin(), numbers.end(), [&n]{ return n++; });
    n=0;

    std::sort(numbers.rbegin(), numbers.rend());

//    for(auto i : numbers){
//        std::cout<<i<<std::endl;
//    }

    std::copy(numbers.begin(), numbers.end(), std::ostream_iterator<int>(std::cout, " "));

//    std::cout <<  << std::endl;

    auto tempit = std::unique(numbers.begin(), numbers.end());
//    numbers.erase(numbers.begin(), tempit);

    std::copy(numbers.begin(), numbers.end(), std::ostream_iterator<int>(std::cout, " "));
//    std::copy(numbers.begin(), numbers.end(), std::ostream_iterator<int>(std::cout, " "));


    return 0;
}
