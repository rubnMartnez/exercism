#include "prime_factors.h"

#include <cstdint>

namespace prime_factors
{

    std::vector<uint8_t> mainPrimes{2,3,5,7,11,13,17,19};

    // TODO: add your solution here
    std::vector<long long> of(long int n)
    {
        if (n == 1) return {};
        std::vector<long long> resVec{};
        long int quotient{n};
        uint64_t reminder{};

        while (quotient > 1)
        {
            bool primeAdded = false;
            for (uint8_t mainPrim : mainPrimes){
                reminder = quotient % mainPrim;
                if (reminder) continue;

                quotient /= mainPrim;
                resVec.emplace_back(mainPrim);
                primeAdded = true;
                break;
            }
            if (!primeAdded){
               resVec.emplace_back(quotient);
               break;
            }
        }

        return resVec;
    }

} // namespace prime_factors
