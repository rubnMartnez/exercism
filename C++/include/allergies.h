#pragma once

#include <string>
#include <unordered_set>
#include <unordered_map>

namespace allergies {

// TODO: add your solution here
class allergy_test
{
private:
    int mAllergiesTotal;
    std::unordered_set<std::string> mAllergies;

    std::unordered_map<int, std::string> mAllergensMapping = {
        {1, "eggs"},
        {2, "peanuts"},
        {4, "shellfish"},
        {8, "strawberries"},
        {16, "tomatoes"},
        {32, "chocolate"},
        {64, "pollen"},
        {128, "cats"}
    };

    std::unordered_map<int, int> mMappingIndexToAllergen = {
        {0, 1},
        {1, 2},
        {2, 4},
        {3, 8},
        {4, 16},
        {5, 32},
        {6, 64},
        {7, 128}
    };

    void checkAllergies();
    void checkAllergiesBitwise();
public:
    allergy_test(const int allergiesTotal);
    ~allergy_test();

    bool is_allergic_to(const std::string& allergy);
    std::unordered_set<std::string> get_allergies() const;
};


}  // namespace allergies

