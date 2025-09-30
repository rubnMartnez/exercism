#include "allergies.h"

#include <cmath>

namespace allergies {

// TODO: add your solution here
allergy_test::allergy_test(const int allergiesTotal) : mAllergiesTotal(allergiesTotal)
{
    mAllergies.reserve(8);
    checkAllergies(allergiesTotal);
}

allergy_test::~allergy_test()
{
}

void allergy_test::allergiesRecursiveCheck(unsigned int value){
    for (auto it = mAllergensMapping.begin(); it != mAllergensMapping.end(); it++){
        unsigned int complement = value - it->first;
        if (mAllergensMapping.find(complement) != mAllergensMapping.end()){
            mAllergies.emplace((*it).second);
            mAllergies.emplace(mAllergensMapping[complement]);
            
        }
    }
}

void allergy_test::checkAllergies(unsigned int numAllergies){
    if (numAllergies > 255) {
        mAllergies.emplace("eggs");
        return;
    }

    if (numAllergies == 255){
        for (auto it : mAllergensMapping){
            mAllergies.emplace(mAllergensMapping[it.first]);
        }
        return;
    }

    switch (numAllergies)
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

    unsigned int complement = 0;

    for (auto it = mAllergensMapping.begin(); it != mAllergensMapping.end(); it++){
        complement = numAllergies - it->first;
        // if (complement == 0){
        //     mAllergies.emplace(mAllergensMapping[complement]);
        //     return;
        // } 
        if (mAllergensMapping.find(complement) != mAllergensMapping.end()){
            mAllergies.emplace((*it).second);
            mAllergies.emplace(mAllergensMapping[complement]);
            numAllergies -= complement;
            return;
        } else {
            checkAllergies(complement);
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

