#include <iostream>

//#include <list>
#include <vector>
#include <numeric>


int main(int argc, char *argv[])
{


//    std::list<int> numbers;
    std::vector<int> numbers;

    constexpr int range = 10000000;
    constexpr int index = range/2;

    numbers.resize(range);
    std::iota(numbers.begin(), numbers.end(), 1);

//    real	0m1.601s
//    user	0m1.516s
//    sys	0m0.080s

//    numbers./
    std::list<int>::iterator iter = numbers.begin();

    for(int i=1; i<index; ++i){
        ++iter;
    }

    std::cout <<  (*iter) << std::endl;

//    real	0m1.618s
//    user	0m1.516s
//    sys	0m0.100s



    return 0;
}
