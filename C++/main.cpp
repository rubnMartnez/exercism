#include "main.h"
#include "kindergarten_garden.h"

int main(){
    auto arr = kindergarten_garden::plants("VRCGVVRVCGGCCGVRGCVCGCGV\nVRCCCGCRRGVCGCRVVCVGCGCV", "Alice");
    for (auto a : arr)
        std::cout << a << std::endl; // true

    //std::cin.get();
}