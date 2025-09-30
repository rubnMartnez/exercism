#include "main.h"
#include "allergies.h"

#include <iostream>

int main(){

    allergies::allergy_test allergyClass{248};
    std::cout << allergyClass.is_allergic_to("peanuts") << std::endl;
    for (auto a : allergyClass.get_allergies())
        std::cout << a << std::endl;

    // std::cout << allergyClass.is_allergic_to("b") << std::endl;
    // for (auto a : allergyClass.get_allergies())
    //     std::cout << a << std::endl;

    // auto value = namespace::positions_to_quantity(89);
    //std::cout << value << std::endl;

    //std::cin.get();
}