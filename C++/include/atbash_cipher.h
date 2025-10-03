#pragma once

#include <string>
#include <map>

namespace atbash_cipher {

// TODO: add your solution here


inline std::map<char, char> plainToCipher;
inline std::map<char, char> cipherToPlain;

void fillMaps();
char convertLetter(char input, const std::map<char, char>& mapping);

std::string encode(const std::string& word);
std::string decode(const std::string& code);

}  // namespace atbash_cipher

