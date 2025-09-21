#include "headers/main.h"
#include "headers/leap.h"

#include <iostream>

int main(){
    auto leapOut = leap::is_leap_year(1997); // should be false
    leapOut = leap::is_leap_year(1900); // should be false
    leapOut = leap::is_leap_year(2000); // should be true

    std::cout << leapOut << std::endl;

    std::cin.get();
}