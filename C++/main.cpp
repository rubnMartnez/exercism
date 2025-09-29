#include "main.h"
#include "allergies.h"

#include <iostream>

int main(){

    allergies::allergy_test allergyClass{1};
    std::cout << allergyClass.is_allergic_to("a") << std::endl;

    // auto value = namespace::positions_to_quantity(89);
    //std::cout << value << std::endl;

    //std::cin.get();
}