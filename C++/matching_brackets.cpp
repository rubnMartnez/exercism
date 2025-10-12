#include "matching_brackets.h"

#include <vector>

namespace matching_brackets {

// TODO: add your solution here
bool check(const std::string& str){
    std::vector<char> bracketList{};
    for (char c : str){
        auto closingBracketIt = bracketMapping.find(c);
    
        if (closingBracketIt != bracketMapping.end()){
            if (bracketList.empty()) return false;

            if (closingBracketIt->second == bracketList.back()){
                bracketList.pop_back();
                continue;
            } else {
                return false;
            }
        }

        if (c == '[' || c == '{' || c == '('){
            bracketList.push_back(c);
            continue;
        }
    }

    return bracketList.empty();
}

}  // namespace matching_brackets

