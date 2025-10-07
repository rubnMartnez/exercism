#include "main.h"
#include "sieve.h"

int main(){
    auto a = sieve::primes(10);

    for (int i = 0; i < a.size(); i++)
        std::cout << a[i] << std::endl;

    //std::cin.get();
}