#include "grains.h"
#include <cmath>

namespace grains {

// TODO: add your solution here

uint64_t total(){
    return std::pow(2, 64);
}
uint64_t square(uint8_t pos){
    auto a = std::pow(2, pos);
    return a;
}

}  // namespace grains

