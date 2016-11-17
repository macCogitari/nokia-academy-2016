#include <iostream>

#include <unordered_set>

int main(int argc, char *argv[])
{

    std::unordered_set<int> set{1,2,3, 4, 5, 6, 7, 8, 9};

    std::cout << "bucket for middle value: " << set.bucket(5) << std::endl;
    std::cout << "bucket_size: " << set.bucket_size(set.bucket(5)) << std::endl;
    std::cout << "bucket_count: " << set.bucket_count() << std::endl;
    return 0;
}
