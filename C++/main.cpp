#include "main.h"
#include "prime_factors.h"

int main()
{
    auto a = prime_factors::primes(10);

    for (int i = 0; i < a.size(); i++)
        std::cout << a[i] << std::endl;

    // std::cin.get();
}