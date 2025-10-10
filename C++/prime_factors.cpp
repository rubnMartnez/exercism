#include "prime_factors.h"

#include <cstdint>

namespace prime_factors
{
    // TODO: add your solution here
    std::vector<long long> of(long int n)
    {
        if (n == 1) return {};
        std::vector<long long> resVec{};

        long int quotient{ n };

        while (quotient % 2 == 0)
        {
            quotient /= 2;
            resVec.emplace_back(2);
        }

        for (int i = 3; i <= quotient; i += 2) {
            while (quotient % i == 0)
            {
                quotient /= i;
                resVec.emplace_back(i);
            }
        }

        return resVec;
    }

} // namespace prime_factors
