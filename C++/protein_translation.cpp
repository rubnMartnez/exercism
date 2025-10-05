#include "protein_translation.h"
#include <cstdint>

namespace protein_translation {

// TODO: add your solution here
std::vector<std::string> proteins(std::string str){
    std::vector<std::string> resVec{};
    std::string substr{};
    substr.reserve(13);
    for (uint32_t i = 0; i < str.size(); i += 3){
        substr = codonToAC[str.substr(i, 3)];
        if (substr == "STOP") break;
        resVec.emplace_back(substr);
    }
    return resVec;
}

}  // namespace protein_translation

