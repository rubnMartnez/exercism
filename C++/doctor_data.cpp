// ERROR: FILE CORRUPTED. Please supply valid C++ Code.

/*

    hp4,ölacöiömthö%Äsmaö%Äsubö(311040ö%Äspaö%Äaddö(311040ö%Ädacöiömthö%Äcountö.hpt,hp4ö%Äxctöhd2ö%Ädacöiöma1
hp2,öjmpö.

*/

#include "doctor_data.h"


namespace heaven {

Vessel::Vessel(const std::string& name, int gen)
{
    mName = name;
    generation = gen;
    current_system = star_map::System::Sol;
}
Vessel::Vessel(const std::string& name, int gen, star_map::System sys)
{
    mName = name;
    generation = gen;
    current_system = sys;
}

Vessel::~Vessel()
{
}

Vessel Vessel::replicate(std::string name){
    return {name, generation + 1, current_system};
}

bool Vessel::shoot_buster(){
    if (busters){
        busters--;
        return true;
    }
    return busters;
}

void Vessel::make_buster(){
    busters++;
}

bool in_the_same_system(Vessel firstVess, Vessel secondVess){
    return firstVess.current_system == secondVess.current_system;
}

std::string get_older_bob(Vessel firstVess, Vessel secondVess){
    if (firstVess.generation < secondVess.generation)
        return firstVess.mName;
    return secondVess.mName;
}

} // namespace heavena
