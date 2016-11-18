#include <iostream>
#include <array>
#include <algorithm>



bool isPrime(int number){

    if(number < 2) return false;
    if(number == 2) return true;
    if(std::modulus<int>()(number, 2) == 0) return false;
    for(int i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }
    return true;

}



int main(int argc, char *argv[])
{
    std::array<int, 1000> numbers;
    int n=1;
    std::generate(numbers.begin(), numbers.end(), [&n](){return ++n;});




    return 0;
}
