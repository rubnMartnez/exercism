#include "main.h"
#include "rotational_cipher.h"

int main(){
    auto a = rotational_cipher::rotate("a", 26);
    std::cout << a << std::endl;

    //std::cin.get();
}