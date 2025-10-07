#include "sieve.h"

namespace sieve {

// TODO: add your solution here
std::vector<int> primes(int value){
    std::vector<int> resVec;
    resVec.reserve(value);
    for (int i = 2; i<=value; i++){
        bool isPrime = true;
        for (int j = 2; j < i; j++){
            if(isPrime){
                for (int k = 2; k < i; k++){
                    if (j * k == i){
                        isPrime = false;
                        break;
                    }
                }
            }
        }
        if (isPrime) resVec.emplace_back(i);
    }
    return resVec;
}

}  // namespace sieve

