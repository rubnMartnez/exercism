#include "luhn.h"

#include <algorithm>
#include <iostream>

namespace luhn {

// TODO: add your solution here
bool valid(const std::string& str){
    if (str.size() < 2) return false;    
    std::string lNum = str;
    lNum.erase(std::remove_if(lNum.begin(), lNum.end(), ::isspace), lNum.end());
    if (!std::all_of(lNum.begin(), lNum.end(), ::isdigit))
        return false;
    if (lNum.size() < 2 && lNum[0] == '0') return false;
    std::reverse(lNum.begin(), lNum.end());
    int res = 0;
    int count = 0;
    for (auto cr : lNum){
        int num = cr - '0';
        if (count){
            num *= 2;
            if (num > 9) num -= 9;
            count = 0;
        } else {
            count++;
        }
        res += num;
    }
    return res % 10 == 0;
}

}  // namespace luhn

