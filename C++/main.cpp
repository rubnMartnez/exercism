#include "main.h"
#include "protein_translation.h"

int main(){
    auto a = protein_translation::proteins("AUGUUUUGG");
    for (int i = 0; i < a.size(); i++)
        std::cout << a[i] << std::endl; // "Methionine", "Phenylalanine", "Tryptophan"

    //std::cin.get();
}