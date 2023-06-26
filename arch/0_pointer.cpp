#include <iostream>
#include <cstring>

#define LOG(x) std::cout << x << std::endl;

int main() {

    // raw pointer
    int a = 2;
    LOG(2);
    int* ptr = &a;
    LOG(ptr);

    //dereferencing -> read or write into the memory 
    LOG(*ptr);
    *ptr = 10;
    LOG(*ptr);
    LOG(ptr);

    // allocate memory to the heap  
    char* buffer = new char[8];
    memset(buffer, 0, 8);
    LOG(buffer);
    LOG(*buffer);

    char** ptr_b = &buffer;
    LOG(ptr_b);
    LOG(*ptr_b);

    delete[] buffer;


    return 0;
}