#include "main.h"
#include "matching_brackets.h"

int main()
{
    auto a = matching_brackets::check("}");
    std::cout << a << std::endl;

    // for (int i = 0; i < a.size(); i++)
    //     std::cout << a[i] << std::endl;

    // std::cin.get();
}