#include "armstrong_numbers.h"

#include <cmath>
#include <iostream>
#include <vector>

namespace armstrong_numbers {

// TODO: add your solution here
bool is_armstrong_number(const int& num){
    if (num == 0) return true;

    int result = 0;
    int numOfDigits = 0;
    int absoluteNum = std::abs(num); // to remove negative sign
    std::vector<int> digits;
    digits.reserve(5);

    while(absoluteNum > 0){
        digits.emplace_back(absoluteNum % 10);
        absoluteNum /= 10;
        numOfDigits++;
    }
    std::cout << "num of digits = " << numOfDigits << std::endl;

    for (int digit : digits){
        result += std::pow(digit, numOfDigits);
    }

    return result == num;
}

}  // namespace armstrong_numbers

