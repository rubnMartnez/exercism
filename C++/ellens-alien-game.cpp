#include <iostream>

namespace targets {
// TODO: Insert the code for the alien class here
class Alien
{
private:
    int health;
    bool shieldUp;
    bool tpBlocking;

public:
    int x_coordinate, y_coordinate;

    Alien(int x, int y) 
    //: x_coordinate(x), y_coordinate(y), health(3), shieldUp(false), tpBlocking(false) // commented out cause exercism compatibility
    {
        x_coordinate = x;
        y_coordinate = y;
        health = 3;
        shieldUp = false;
        tpBlocking = false;
    }

    ~Alien()
    {
    }

    int get_health() const {
        return health;
    }

    bool is_alive() const {
        return health;
    }

    bool hit() {
        if(!shieldUp){
            if (is_alive()) health -= 1;
        }
        return !shieldUp;
    }

    bool teleport(int x_new, int y_new){
        if (!tpBlocking){
            x_coordinate = x_new;
            y_coordinate = y_new;
        }
        return !tpBlocking;
    }

    bool collision_detection(Alien alien){
        return alien.x_coordinate == x_coordinate && alien.y_coordinate == y_coordinate;
    }

};

}  // namespace targets


// === just for testing, do not copy ======================================

int main(){
    targets::Alien alien{2, 0};
    
    auto a = alien.x_coordinate;
    std::cout << alien.x_coordinate << std::endl;
}