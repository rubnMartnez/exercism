#include "atbash_cipher.h"

namespace atbash_cipher {

// TODO: add your solution here

void fillMaps(){
    if(!plainToCipher.empty()) return;
    std::string alphabet{"abcdefghijklmnopqrstuvwxyz"};
    for (int i = 0, iOpp = alphabet.size() - 1; i < (int)alphabet.size(); i++, iOpp--){
        plainToCipher[alphabet[i]] = alphabet[iOpp];
        cipherToPlain[alphabet[iOpp]] = alphabet[i];
    }
}

char convertLetter(char input, const std::map<char, char>& mapping){
    // exercism doesn't allow those those return values, that why I had to duplicate code...
    // if (std::isspace(input)) return NULL;
    // if (std::ispunct(input)) return NULL;
    if (std::isdigit(input)) return input;
    return mapping.at(std::tolower(input));
}

std::string encode(const std::string& str){
    fillMaps();
    int i = 0;
    std::string res{};
    res.reserve(str.size());
    for (char cr : str){
        if (std::isspace(cr) || std::ispunct(cr)) continue;
        if (i==5){
            i = 0; 
            res.push_back(' ');
        }        
        res.push_back(convertLetter(cr, plainToCipher));
        i++;
    }
    return res;
}

std::string decode(const std::string& str){
    fillMaps();
    std::string res{};
    res.reserve(str.size());
    for (char cr : str){
        if (std::isspace(cr) || std::ispunct(cr)) continue;
        res.push_back(convertLetter(cr, cipherToPlain));
    }
    return res;
}

}  // namespace atbash_cipher

