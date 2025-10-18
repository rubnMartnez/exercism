#pragma once

#include <cstdint>

namespace space_age {

// TODO: add your solution here

class space_age
{
private:
    uint64_t mAgeInSeconds{};
    double mAgeInEarthYears{};
    const double mEARTH_YEAR_IN_SECONDS{31'557'600};
public:
    explicit space_age(uint64_t age_in_seconds);
    ~space_age();

    uint64_t seconds() const;

    double on_mercury() const;
    double on_venus() const;
    double on_earth() const;
    double on_mars() const;
    double on_jupiter() const;
    double on_saturn() const;
    double on_uranus() const;
    double on_neptune() const;

};


}  // namespace space_age

