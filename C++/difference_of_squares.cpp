#include "difference_of_squares.h"

#include <cmath>

namespace difference_of_squares {

// TODO: add your solution here
uint32_t square_of_sum(uint32_t n) {
    uint32_t sum = n * (n + 1) / 2;
    return sum * sum;
}

uint32_t sum_of_squares(uint32_t n) {
    return n * (n + 1) * (2 * n + 1) / 6;
}

uint32_t difference(uint32_t n) {
    return square_of_sum(n) - sum_of_squares(n);
}

}  // namespace difference_of_squares

