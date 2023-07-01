#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>

// CLASS 
// lecture: https://www.youtube.com/watch?v=2BP8NhxjrO0&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=18
// everything inside a class is private (public in struct)

#define LOG(x) std::cout << x << std::endl;


class Person {
    public:
        int x, y, speed;

        void Move(int xa, int ya) {
            x = xa * speed;
            y = ya * speed;
        }
};

int main() {

    Person person;
    person.x = 0;
    person.y = 0;
    LOG(person.x);
    LOG(person.y);
    person.speed = 1;
    person.Move(3,3);
    LOG(person.x);
    LOG(person.y);

    return 0;
}