#include "allergies.h"

namespace allergies {

// TODO: add your solution here
allergy_test::allergy_test(const int testId) : mTestId(testId)
{
    mAllergies.reserve(8);
    mAllergies.emplace("a");
}

allergy_test::~allergy_test()
{
}

bool allergy_test::is_allergic_to(const std::string& item){
    return item=="a";
}

std::unordered_set<std::string> allergy_test::get_allergies() const {
    return mAllergies;
}

}  // namespace allergies

