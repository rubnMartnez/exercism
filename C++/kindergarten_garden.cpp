#include "kindergarten_garden.h"

#include <algorithm>

namespace kindergarten_garden {

// TODO: add your solution here
std::array<kindergarten_garden::Plants, 4> plants(std::string plants, std::string student){
    std::array<kindergarten_garden::Plants, 4> resArr;
    auto spaceIt = std::find_if(plants.cbegin(), plants.cend(), ::isspace);
    std::string row1{plants.substr(0, spaceIt - plants.begin())};
    std::string row2{plants.substr(spaceIt + 1 - plants.begin(), plants.size() - 1)};

    resArr[0] = cupToPlant[row1[studentToPos.at(student)]];
    resArr[1] = cupToPlant[row1[studentToPos.at(student) + 1]];

    resArr[2] = cupToPlant[row2[studentToPos.at(student)]];
    resArr[3] = cupToPlant[row2[studentToPos.at(student) + 1]];

    return resArr;
}

}  // namespace kindergarten_garden

