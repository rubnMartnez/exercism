#include "leap.h"

namespace leap {

// TODO: add your solution here
bool is_leap_year(const int& year){
    if (year % 100 == 0){
        return year % 400 == 0 ? true : false;
    } else {
        return year % 4 == 0;
    }
}

}  // namespace leap

