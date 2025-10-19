#include "two_fer.h"

namespace two_fer {

// TODO: add your solution here

std::string two_fer(const std::string& name){
    std::ostringstream stream;
    stream << "One for " << name << ", one for me.";
    return stream.str();
}

}  // namespace two_fer

