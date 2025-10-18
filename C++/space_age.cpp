#include "space_age.h"

namespace space_age {

// TODO: add your solution here

space_age::space_age(uint64_t ageInSeconds) : mAgeInSeconds(ageInSeconds)
{
    mAgeInEarthYears = ageInSeconds / mEARTH_YEAR_IN_SECONDS;
}

space_age::~space_age()
{
}

uint64_t space_age::seconds() const{
    return mAgeInSeconds;
}

double space_age::on_mercury() const{
    return mAgeInEarthYears / 0.2408467;
}
double space_age::on_venus() const{
    return mAgeInEarthYears / 0.61519726;
}
double space_age::on_earth() const{
    return mAgeInEarthYears;
}
double space_age::on_mars() const{
    return mAgeInEarthYears / 1.8808158;
}
double space_age::on_jupiter() const{
    return mAgeInEarthYears / 11.862615;
}
double space_age::on_saturn() const{
    return mAgeInEarthYears / 29.447498;
}
double space_age::on_uranus() const{
    return mAgeInEarthYears / 84.016846;
}
double space_age::on_neptune() const{
    return mAgeInEarthYears / 164.79132;
}

}  // namespace space_age

