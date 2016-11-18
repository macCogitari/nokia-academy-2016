#include <iostream>
#include <algorithm>


bool is_palindrome(std::string word){


    auto pair =
            std::mismatch(word.begin(), word.end(), word.rbegin());

    if(pair.first == word.end() && pair.second == word.rend()){
        return true;
    }else{
        return false;
    }

}

int main(int argc, char *argv[])
{



    std::cout << is_palindrome("kajak") << std::endl;
    return 0;
}
