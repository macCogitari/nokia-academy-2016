#include <iostream>

#include <deque>
#include <algorithm>
#include <iterator>

std::ostream& operator << (std::ostream& o, std::deque<int> const &  deq){
    std::copy(deq.begin(), deq.end(), std::ostream_iterator<int>(std::cout, " "));
    o << std::endl;
    return o;
}

int main(int argc, char *argv[])
{

    std::deque<int> deq(14);

    std::generate_n(std::back_inserter(deq), deq.size(), [](){
        return std::modulus<int>()(std::rand(), 7);
    } );

    std::sort(deq.begin(), deq.end());
    std::cout << deq;

    auto iterUnique = std::unique(deq.begin(), deq.end());
    deq.erase(iterUnique, deq.end());
    std::cout << deq;

    std::rotate(deq.begin(), deq.begin()+(deq.size()/2),  deq.end());
    std::cout << deq;

    return 0;
}
