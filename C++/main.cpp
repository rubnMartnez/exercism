#include "main.h"
#include "doctor_data.h"

#include <iostream>
#include <cstdint>

int main(){

    heaven::Vessel ves{"a",0};
    int a= (int)ves.current_system;
    std::cout << a << std::endl;
    auto b = ves.replicate("b");
    std::cout << ves.shoot_buster() << std::endl;
    std::cout << ves.busters << std::endl;

    //std::cin.get();
}