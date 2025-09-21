#include "headers/main.h"
#include "headers/leap.h"

#include <iostream>

int main(){
    auto leapOut = leap::is_leap_year(1997);

    std::cout << leapOut << std::endl;

    //std::cin.get();
}