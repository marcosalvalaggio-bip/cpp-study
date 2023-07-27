#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>

#define LOG(x) std::cout << x << std::endl;

// lecture 25: Destructors in C++
// link: https://www.youtube.com/watch?v=D8cWquReFqw&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=25

class Entity {

    public:
        float X, Y;

        Entity(float x, float y) {
            	X = x;
                Y = y;
        }

        ~Entity(){
            // Destructor (empty, as there are no dynamic resources to release)
        }

        void print() {
            std::cout << X << ',' <<  Y << std::endl; 
        }

}; 

int main() {

    Entity e{1.0, 2.0};
    e.print();
    LOG(e.X);
    return 0;
}