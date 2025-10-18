#pragma once

#include <string>
#include <memory>

namespace troy {

struct artifact {
    // constructors needed (until C++20)
    artifact(std::string name) : name(name) {}
    std::string name;
};

struct power {
    // constructors needed (until C++20)
    power(std::string effect) : effect(effect) {}
    std::string effect;
};

class human
{
private:
    /* data */
public:
    human();
    ~human();

    std::unique_ptr<artifact> possession{};
    std::shared_ptr<power> own_power{};
    std::shared_ptr<power> influenced_by{};

};

void give_new_artifact(human& human, const std::string& artifactName);
void exchange_artifacts(std::unique_ptr<artifact>& human1Poss, std::unique_ptr<artifact>& human2Poss);

void manifest_power(human& human, const std::string& powerName);

void use_power(const human& caster, human& target);

int power_intensity(const human& human);

}  // namespace troy

