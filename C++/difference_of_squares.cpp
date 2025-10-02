#include "difference_of_squares.h"

#include <cmath>

namespace difference_of_squares {

// TODO: add your solution here
uint32_t lastCalculatedNum = 0;
uint32_t squareOfSum = 0;
uint32_t sumOfSquares = 0;

void calculate(uint32_t n){
    if (lastCalculatedNum != n){
        lastCalculatedNum = n;
        squareOfSum = 0;
        sumOfSquares = 0;
        for (uint32_t i = 1; i <= n; i++){
            squareOfSum += i;
            sumOfSquares += std::pow(i, 2);
        }
    }
}
    
uint32_t square_of_sum(uint32_t n){
    calculate(n);
    return std::pow(squareOfSum, 2);
}

uint32_t sum_of_squares(uint32_t n){
    calculate(n);
    return sumOfSquares;
}

uint32_t difference(uint32_t n){
    return square_of_sum(n) - sum_of_squares(n);
}

}  // namespace difference_of_squares

