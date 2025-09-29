#include "main.h"
#include "eliuds_eggs.h"

#include <iostream>

int main(){

    auto value = chicken_coop::positions_to_quantity(89);
    std::cout << value << std::endl;
    value = chicken_coop::positions_to_quantity(16);
    std::cout << value << std::endl;
    value = chicken_coop::positions_to_quantity(2000000000);
    std::cout << value << std::endl;

    //std::cin.get();
}