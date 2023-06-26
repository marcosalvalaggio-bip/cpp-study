#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>


#define LOG(x) std::cout << x << std::endl;

int main() {

    char letter = 'a';
    std::string stringa = "stringa";
    LOG(letter); 
    std::cout << sizeof(letter) << std::endl;
    LOG(stringa);
    std::cout << sizeof(stringa) << std::endl;
    std::cout << stringa.size() << std::endl;

    return 0;
}