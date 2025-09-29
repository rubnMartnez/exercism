#include "main.h"
#include "armstrong_numbers.h"

#include <iostream>

int main(){

    auto value = armstrong_numbers::is_armstrong_number(9);
    std::cout << value << std::endl; // should be true
    value = armstrong_numbers::is_armstrong_number(10);
    std::cout << value << std::endl; // should be false
    value = armstrong_numbers::is_armstrong_number(153);
    std::cout << value << std::endl; // should be true
    value = armstrong_numbers::is_armstrong_number(154);
    std::cout << value << std::endl; // should be false
    value = armstrong_numbers::is_armstrong_number(0);
    std::cout << value << std::endl; // edge case, should return true right away

    //std::cin.get();
}