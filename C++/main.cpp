#include "main.h"
#include "luhn.h"

int main(){
    auto a = luhn::valid(" 0");
    std::cout << a << std::endl; // true

    //std::cin.get();
}