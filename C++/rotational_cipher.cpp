#include "rotational_cipher.h"

namespace rotational_cipher {

// TODO: add your solution here
std::string rotate(std::string word, int rot){
    std::string str{};
    str.reserve(word.size());
    for (char cr : word){
        if (std::isdigit(cr) || std::isspace(cr) || std::ispunct(cr)){
            str.push_back(cr);
            continue;
        }
        int pos = cr + rot;
        if (std::islower(cr)){
            if (pos > 122){
                str.push_back(96 + (pos - 122));
            } else {
                str.push_back(pos);
            }
        } else {
            if (pos > 90){
                str.push_back(64 + (pos - 90));
            } else {
                str.push_back(pos);
            }
        }
    }
    return str;
}

}  // namespace rotational_cipher

