#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>

// lecture 22: Static for Classes and Structs in C++
// link: https://www.youtube.com/watch?v=V-BFlMrBtqQ&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=22

// static inside class: only one variable for all the instance created of the class, all share the same variable 
// se cambio il valore della variabile static in una instance della classe questa cambia ovunque

// static variable come variabili di un namespace...
// ovviamente gli static method non possono accedere a non static varibles`. Un static method non ha una class instance.

class Entity {
    public:
        static int x, y;
    public:
        static void print() {
            std::cout << x << ',' << y << std::endl;
        }

};

int Entity::x;
int Entity::y;

#define LOG(x) std::cout << x << std::endl;

int main() {

    Entity e; 
    Entity::x = 2;
    Entity::y = 3;
    Entity::print();
    return 0;
}