#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

#define LOG(x) std::cout << x << std::endl;

int main() {

    // create a range "python like" 
    std::vector<int> range(10);
    std::iota(range.begin(), range.end(), 0);
    for (const auto& i:range) {
        LOG(i);
    }



    return 0;

}