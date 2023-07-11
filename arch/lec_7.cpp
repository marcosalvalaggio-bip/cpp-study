#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>

// lecture 21: static
// link: https://www.youtube.com/watch?v=f3FVU-iwNuA&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=21

// per convenzione quando uso static la variable va con prefix s_<name>

// se volessi chiamare una variabile static presente in un altro file devo usare extern extern <type> <var name>;

#define LOG(x) std::cout << x << std::endl;

static int add(int a, int b) {
    return a + b;
}

int main() {

    int res = add(3, 4);
    LOG(res);

    return 0;
}