#pragma once
#include <string>
#include <map>

namespace matching_brackets {

// TODO: add your solution here

inline std::map<char, char> bracketMapping{
    {']', '['},
    {'}', '{'},
    {')', '('}
};

bool check(const std::string& str);

}  // namespace matching_brackets

