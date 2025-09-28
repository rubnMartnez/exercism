#include "darts.h"

#include <cmath>

namespace darts {

// TODO: add your solution here
float score(const float& x, const float& y){
    auto distance = sqrt((x*x) + (y*y)); 

    if (distance > 10) {return 0;} // missed the target

    if (distance > 5){
        return 1; // outer circle
    } else {
        return distance > 1 ? 5 : 10; // inner circle or center
    }
}

}  // namespace darts

