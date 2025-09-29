#include "eliuds_eggs.h"

#include <bitset>

namespace chicken_coop {

// TODO: add your solution here
int positions_to_quantity(const int& val){
    // pass val to bin
    std::bitset<32> binVal{(unsigned long long)val};

    // iterate to count 1s
    return binVal.count(); // no need to iterate since bitset already have the built in count func
}

}  // namespace chicken_coop

