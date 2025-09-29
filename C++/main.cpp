#include "main.h"
#include "bob.h"

#include <iostream>

int main(){

    auto value = bob::hey("How are you?");
    std::cout << value << std::endl;
    value = bob::hey("WATCH OUT!");
    std::cout << value << std::endl;
    value = bob::hey("WHAT ARE YOU DOING?");
    std::cout << value << std::endl;
    value = bob::hey(" ");
    std::cout << value << std::endl;
    value = bob::hey("fasfasfsafasf ");
    std::cout << value << std::endl;
    value = bob::hey("1, 2, 3");
    std::cout << value << std::endl;
    value = bob::hey("4?");
    std::cout << value << std::endl;
    value = bob::hey("\n\r \t");
    std::cout << value << std::endl;

    //std::cin.get();
}