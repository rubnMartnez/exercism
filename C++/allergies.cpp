#include "allergies.h"

#include <cmath>
#include <vector>

namespace allergies {

// TODO: add your solution here
allergy_test::allergy_test(const int allergiesTotal) : mAllergiesTotal(allergiesTotal)
{
    mAllergies.reserve(8);
    checkAllergies();
}

allergy_test::~allergy_test()
{
}

void allergy_test::checkAllergies(){
    if (mAllergiesTotal == 255){
        for (auto it : mAllergensMapping){
            mAllergies.emplace(mAllergensMapping[it.first]);
        }
        return;
    }

    switch (mAllergiesTotal)
    {
        case 1:
        case 2:
        case 4:
        case 8:
        case 16:
        case 32:
        case 64:
        case 128:
            mAllergies.emplace(mAllergensMapping[mAllergiesTotal]);
            return;
        default:
            break;
    }

    int filteredAllergies = mAllergiesTotal > 255 ? mAllergiesTotal % 256 : mAllergiesTotal;

    std::vector<int> binNums;
    binNums.reserve(8);
    int quotient = filteredAllergies / 2;
    int reminder = filteredAllergies % 2;
    binNums.push_back(reminder);

    while (quotient > 0)
    {
        reminder = quotient % 2;
        quotient /= 2;
        binNums.push_back(reminder);
    }
    for (int i = binNums.size() - 1; i >= 0; i--){
        if (binNums[i]){
            mAllergies.emplace(mAllergensMapping[mMappingIndexToAllergen[i]]);
        }
    }
}

bool allergy_test::is_allergic_to(const std::string& allergy){
    auto resIt = mAllergies.find(allergy);
    return resIt != mAllergies.end();
}

std::unordered_set<std::string> allergy_test::get_allergies() const {
    return mAllergies;
}

}  // namespace allergies

