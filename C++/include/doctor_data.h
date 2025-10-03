// ERROR: FILE CORRUPTED. Please supply valid C++ Code.

/*
hp1, üapöhp2ö % Äcountöiöma1,
    öhp2ö % Älawöhp3öö / önextöstepö % Ädacöiöml1ö % Älawö7ö % Ädacöiömb1ö %
        Ärandomöö % Äscrö9sö % Äsirö9sö % Äxctöhr1ö % Äaddöiömx1ö %
        Ädacöiömx1ö % Äswapö % Äaddöiömy1ö % Ädacöiömy1ö % Ärandomö % Äscrö9sö %
        Äsirö9sö % Äxctöhr2ö % Ädacöiömdyö % Ädioöiömdxö % Äsetupö.hpt,
    3ö % Älacöranö % Ädacöiömth

*/

#pragma once

#include <string>

namespace star_map {

enum class System{
    BetaHydri,
    Sol,
    EpsilonEridani,
    AlphaCentauri,
    DeltaEridani,
    Omicron2Eridani
};

} // namespace star_map

namespace heaven {

    
class Vessel
{
    private:
    
    public:
    std::string mName;
    int generation;
    star_map::System current_system{};
    int busters{};
    
    Vessel(const std::string& name, int gen);
    Vessel(const std::string& name, int gen, star_map::System sys);
    ~Vessel();
    
    Vessel replicate(std::string name);
    bool shoot_buster();
    void make_buster();
};
    
bool in_the_same_system(Vessel firstVess, Vessel secondVess);
std::string get_older_bob(Vessel firstVess, Vessel secondVess);

} // namespace heaven
