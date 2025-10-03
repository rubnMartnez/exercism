#include "trinary.h"

#include <algorithm>
#include <cmath>

namespace trinary {

// TODO: add your solution here
uint32_t to_decimal(const std::string& trinaryNum){
    if (trinaryNum.empty() || !std::all_of(trinaryNum.begin(), trinaryNum.end(), ::isdigit))
         return 0;

    uint32_t res = 0;
    for (uint32_t i = 0, iOpp = trinaryNum.size() - 1; i < trinaryNum.size(); i++, iOpp--){
        uint32_t tmpNum = trinaryNum[i] - '0';
        res += tmpNum * std::pow(3, iOpp);
    }
    return res;
}

}  // namespace trinary

