#include "bob.h"

#include <algorithm>
#include <cctype>
#include <iostream>

namespace bob {

// TODO: add your solution here
std::string hey(const std::string& str){
    std::string result;
    result.reserve(32); // preallocate the maximum capacity that a response could take
    result = "Whatever."; // assign default response

    if (str.empty()) return "Fine. Be that way!";

    bool isQuestion = false;
    bool isAllUpperCase = true;
    bool hasAnyChar = false;
    bool hasAnyLetters = false;
    bool firstCharFoundAtEnd = false;

    for (int i = 0, iOpposite = str.size() - 1; i < iOpposite; i++, iOpposite--){
        if (!std::isspace(str[i])){
            hasAnyChar = true;
            if (!std::iscntrl(str[i]) && !std::isdigit(str[i]) && !std::ispunct(str[i])){
                hasAnyLetters = true;
                if (!std::isupper(str[i]))
                    isAllUpperCase = false;
            }
        }
        if (!std::isspace(str[iOpposite])){
            hasAnyChar = true;
            if (!firstCharFoundAtEnd){
                firstCharFoundAtEnd = true;
                isQuestion = str[iOpposite] == '?';
            }
            if (!std::iscntrl(str[iOpposite]) && !std::isdigit(str[iOpposite]) && !std::ispunct(str[iOpposite])){
                hasAnyLetters = true;
                if (!std::isupper(str[iOpposite]))
                    isAllUpperCase = false;
            }
        }
    }

    isAllUpperCase = hasAnyLetters && isAllUpperCase;
    
    if (isQuestion){
        result = isAllUpperCase ? "Calm down, I know what I'm doing!" : "Sure.";
    } else {
        if (hasAnyChar){
            if (isAllUpperCase) result = "Whoa, chill out!";
        } else {
            result = "Fine. Be that way!";
        }
    }

    return result;

}

}  // namespace bob

