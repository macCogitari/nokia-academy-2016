#include <iostream>
#include <array>
#include <algorithm>
#include <vector>
#include <functional>
#include <iterator>



std::ostream& operator << (std::ostream& o, std::vector<int> const &  vec){
    std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " "));
    o << std::endl;
    return o;
}



int main(int argc, char *argv[])
{
    std::vector<int> numbers(1000);
    int n=1;
    std::generate(numbers.begin(), numbers.end(), [&n](){return ++n;});
    std::vector<int> primes{};

    std::function<bool(int)> isPrime;
    isPrime = [](int number){
        if(number < 2) return false;
        if(number == 2) return true;
        if(std::modulus<int>()(number, 2) == 0) return false;
        for(int i=3; (i*i)<=number; i+=2){
            if(std::modulus<int>()(number, i) == 0 ) return false;
        }
        return true;
    };

    auto primesIt = std::remove_if(numbers.begin(), numbers.end(), [&](int n)->bool{return !isPrime(n);});
    numbers.erase(primesIt, numbers.end());

    std::cout << numbers;



    return 0;
}
