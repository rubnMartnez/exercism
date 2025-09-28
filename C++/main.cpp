#include "main.h"
#include "bob.h"

#include <iostream>

int main(){

    auto value = bob::hey("WATCH OUT!");

    std::cout << value << std::endl;

    //std::cin.get();
}