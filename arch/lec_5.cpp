#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>

// CLASS vs STRUCT
// lecture: https://www.youtube.com/watch?v=fLgTtaqqJp0&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=19


// In CLASS everything is private in struct everything is public 


#define LOG(x) std::cout << x << std::endl;


// we need to change visibility
class Person {
    public:
        int x, y, speed;

        void move(int xa, int ya) {
            x = xa * speed;
            y = ya * speed;
        }
};


// everitying is just public
struct Player {
    int x, y, speed;

    void move(int xa, int ya) {
        x += xa * speed;
        y += ya * speed;
    }
};


// struct for POD => plain old data
typedef struct {
    float x; 
    float y;
}Vec2;


int main() {

    Player player1;
    player1.x = 0;
    player1.y = 0;
    player1.speed = 1;
    player1.move(3, 3);
    LOG(player1.x);
    LOG(player1.y);

    Vec2 a; 
    a.x = 2.0;
    a.y = 3.0;
    LOG(a.x);
    LOG(a.y);

    return 0;
}