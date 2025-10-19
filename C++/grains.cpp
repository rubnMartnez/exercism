#include "grains.h"
#include <cmath>

namespace grains {

// TODO: add your solution here

uint64_t total(){
    // return ((__uint128_t)1 << 64) - 1; // ? works fine but I didn't want to use this type (since it only works on linux apparently)
    // uint64_t total = ((1ULL << 64)-1); // ? works fine on my computer, but has UB cause the shifting, so exercism complains
    // return total;
    uint64_t total = 1ULL << 63;
    return total * 2 - 1;
}
uint64_t square(uint8_t pos){
    if (pos > 64) return total();
    return 1ULL << (pos - 1);
}

}  // namespace grains

