#include "reverse_string.h"

#include <algorithm>

namespace reverse_string {

// TODO: add your solution here

std::string usingSTL(const std::string& str){
    std::string result = str;
    std::reverse(result.begin(), result.end());
    return result;
}

std::string manually(const std::string& str){
    std::string result;
    result.reserve(str.size());

    for (int i = str.size() - 1; i >= 0; i--){
        result.push_back(str[i]);
    }
    return result;
}

std::string reverse_string(const std::string& str){
    //std::string result = usingSTL(str);
    std::string result = manually(str);
    return result;
}

}  // namespace reverse_string

