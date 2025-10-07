#include "sieve.h"
#include <vector>

namespace sieve {

std::vector<int> primes(int value) {
    if (value < 2)
        return {};

    std::vector<bool> is_prime(value + 1, true);
    is_prime[0] = false;
    is_prime[1] = false;

    for (int i = 2; i * i <= value; ++i) {
        if (is_prime[i]) {
            // Mark multiples of i as not prime
            for (int j = i * i; j <= value; j += i) {
                is_prime[j] = false;
            }
        }
    }

    // Collect primes
    std::vector<int> result;
    result.reserve(value / 2); // small optimization
    for (int i = 2; i <= value; ++i) {
        if (is_prime[i])
            result.emplace_back(i);
    }

    return result;
}

}  // namespace sieve
