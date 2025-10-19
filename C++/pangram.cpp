#include "pangram.h"

#include <map>
#include <algorithm>

namespace pangram {

// TODO: add your solution here

bool is_pangram(std::string sentence){
    std::map<char, bool> alphabetMap;
    for (char c = 'a'; c <= 'z'; ++c)
        alphabetMap[c] = false;

    for (char c : sentence){
        char lowChar = std::tolower(c);
        if (alphabetMap.find(lowChar) != alphabetMap.end())
            alphabetMap.at(lowChar) = true;
    }

    return std::all_of(alphabetMap.begin(), alphabetMap.end(), [](const auto& pair) { return pair.second; });
}

}  // namespace pangram

