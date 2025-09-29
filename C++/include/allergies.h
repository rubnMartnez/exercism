#pragma once

#include <string>
#include <unordered_set>

namespace allergies {

// TODO: add your solution here
class allergy_test
{
private:
    int mTestId;
    std::unordered_set<std::string> mAllergies;
public:
    allergy_test(const int testId);
    ~allergy_test();

    bool is_allergic_to(const std::string& item);
    std::unordered_set<std::string> get_allergies() const;
};


}  // namespace allergies

