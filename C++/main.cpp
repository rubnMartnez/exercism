#include "main.h"
#include "trinary.h"

#include <iostream>
#include <cstdint>

int main(){

    auto value = trinary::to_decimal("1");
    std::cout << value << std::endl; // expected 1
    value = trinary::to_decimal("2");
    std::cout << value << std::endl; // expected 2
    value = trinary::to_decimal("10");
    std::cout << value << std::endl; // expected 3

    //std::cin.get();
}