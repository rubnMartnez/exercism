#include "bob.h"

#include <algorithm>
#include <cctype>

namespace bob {

// TODO: add your solution here
std::string hey(const std::string& str){
    std::string result;
    result.reserve(32); // preallocate the maximum capacity that a response could take
    result = "Whatever."; // assign default response

    auto firstValidChar = str.find_first_not_of(" ");
    if (str.empty() || firstValidChar == std::string::npos){
        return "Fine. Be that way!";
    }
    
    bool hasQuestionMark = str.at(str.size() - 1) == '?';
    bool isAllUpperCase = std::all_of(str.begin(), str.end(), [](const char& c){
        return std::isupper(c);
    });

    if (hasQuestionMark){
        result = isAllUpperCase ? "Calm down, I know what I'm doing!" : "Sure.";
    } else {
        if (isAllUpperCase) result = "Whoa, chill out!";
    }

    return result;
}

}  // namespace bob

