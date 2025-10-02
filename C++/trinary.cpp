#include "trinary.h"

#include <algorithm>

namespace trinary {

// TODO: add your solution here
uint32_t to_decimal(const std::string& trinaryNum){
     if (trinaryNum.empty() || !std::all_of(trinaryNum.begin(), trinaryNum.end(), ::isdigit))
         return 0;
    return 1;
}

}  // namespace trinary

