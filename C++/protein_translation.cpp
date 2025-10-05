#include "protein_translation.h"

namespace protein_translation {

// TODO: add your solution here
std::vector<std::string> proteins(std::string str){
    std::vector<std::string> resVec{};
    int numOfSeq = str.size() / 3;
    for (int i = 0; i < str.size(); i += 3){
        resVec.emplace_back(codonToAC[str.substr(i, i+3)]);
    }
    return resVec;
}

}  // namespace protein_translation

