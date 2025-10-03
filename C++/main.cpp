#include "main.h"
#include "atbash_cipher.h"

#include <iostream>
#include <cstdint>

int main(){
    auto a = atbash_cipher::encode("yes");
    std::cout << a << std::endl; // expected output bvh
    a = atbash_cipher::encode("O M G");
    std::cout << a << std::endl; // expected output lnt

    //std::cin.get();
}