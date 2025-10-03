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
};

} // namespace star_map

namespace heaven {

    class Vessel
    {
    private:
        /* data */
    public:
        Vessel(const std::string& name, int num);
        Vessel(const std::string& name, int num, star_map::System sys);
        ~Vessel();
    };

} // namespace heavena
