#pragma once
#include <string>
#include <vector>
#include <map>

namespace protein_translation {

// TODO: add your solution here
std::multimap<std::string, std::string> codonToAC{
    {"AUG", "Methionine"},
    {"UUU", "Phenylalanine"},
    {"UUC", "Phenylalanine"},
    {"UUA", "Leucine"},
    {"UUG", "Leucine"},
    {"UCU", "Serine"},
    {"UCC", "Serine"},
    {"UCA", "Serine"},
    {"UCG", "Serine"},
    {"UAU", "Tyrosine"},
    {"UAC", "Tyrosine"},
    {"UGU", "Cysteine"},
    {"UGC", "Cysteine"},
    {"UGG", "Tryptophan"},
    {"UAA", "STOP"},
    {"UAG", "STOP"},
    {"UGA", "STOP"}
};

std::vector<std::string> proteins(std::string str);

}  // namespace protein_translation

