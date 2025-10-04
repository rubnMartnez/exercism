#pragma once
#include <array>
#include <string>
#include <map>

namespace kindergarten_garden {

// TODO: add your solution here
enum Plants {
    clover, 
    grass,
    violets,
    radishes
};

inline std::map<char, Plants> cupToPlant = {
        {'C', Plants::clover},
        {'G', Plants::grass},
        {'V', Plants::violets},
        {'R', Plants::radishes}
};

inline std::map<std::string, int> studentToPos = {
        {"Alice", 0},
        {"Bob", 2},
        {"Charlie", 4},
        {"David", 6},
        {"Eve", 8},
        {"Fred", 10},
        {"Ginny", 12},
        {"Harriet", 14},
        {"Ileana", 16},
        {"Joseph", 18},
        {"Kincaid", 20},
        {"Larry", 22}
};

std::array<kindergarten_garden::Plants, 4> plants(std::string plants, std::string student);

}  // namespace kindergarten_garden

