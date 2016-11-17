#include <iostream>

#include <vector>

int main(int argc, char *argv[])
{

    std::vector<int> vec{1,2,4,4,6};
    vec.erase(vec.begin());
    vec.emplace_back(5);
    vec.emplace( vec.begin(), 12);

    std::cout << "vec.size(): " << vec.size() << std::endl;
    std::cout << "vec.max_size(): " << vec.max_size() << std::endl;

    for(auto i: vec){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    vec.clear();

    std::cout << "vec.size(): " << vec.size() << std::endl;


    return 0;
}
