#include "difference_of_squares.h"

#include <cmath>

namespace difference_of_squares {

// TODO: add your solution here

uint32_t square_of_sum(uint32_t n){
    uint32_t num = 0;
    for (uint32_t i = 1; i <= n; i++){
        num += i;
    }
    return std::pow(num, 2);
}

uint32_t sum_of_squares(uint32_t n){
    uint32_t num = 0;
    for (uint32_t i = 1; i <= n; i++){
        num += std::pow(i, 2);
    }
    return num;
}

uint32_t difference(uint32_t n){
    return square_of_sum(n) - sum_of_squares(n);
}

}  // namespace difference_of_squares

