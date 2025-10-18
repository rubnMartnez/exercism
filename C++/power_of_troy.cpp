#include "power_of_troy.h"

namespace troy {

human::human()
{
}

human::~human()
{
}

void give_new_artifact(human& human, const std::string& artifactName){
    human.possession = std::make_unique<artifact>(artifactName);
}
void exchange_artifacts(std::unique_ptr<artifact>& human1Poss, std::unique_ptr<artifact>& human2Poss){
    // if (!human1.possession || !human2.possession) return;
    std::swap(human1Poss, human2Poss);
}

void manifest_power(human& human, const std::string& powerName){
    human.own_power = std::make_shared<power>(powerName);
}

void use_power(const human& caster, human& target){
    if (!caster.own_power) return;
    target.influenced_by = caster.own_power;
}

int power_intensity(const human& human){
    if (!human.own_power) return 0;
    return human.own_power.use_count();
}

}  // namespace troy

