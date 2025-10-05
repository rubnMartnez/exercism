#include "hexadecimal.h"
#include <cstdint>
#include <algorithm>
#include <cmath>

namespace hexadecimal {

// TODO: add your solution here
int convert(std::string hexNum){
    if (hexNum.empty()) return 0;
    std::reverse(hexNum.begin(), hexNum.end());
    int total = 0;
    for (uint64_t i = 0; i < hexNum.size(); i++){
        int num{};
        if (std::isalpha(hexNum[i])){
            num = hexNum[i] - 87;
            if (num > 15) return 0;
        } else if (std::isdigit(hexNum[i])){
            num = hexNum[i] - '0';
        } else {
            return 0;
        }
        // num *= std::pow(16, i);
        if (i > 0){
            for (uint64_t j = 0; j < i; j++)
                num *= 16;
        }
        total += num;
    }
    return total;
}

}  // namespace hexadecimal

