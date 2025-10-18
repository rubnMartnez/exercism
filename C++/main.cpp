#include "main.h"
#include "lasagna_master.h"

int main()
{
    // {
    //     simple_linked_list::List list{};

    //     for (int i = 0; i < 5; i++) {
    //         std::cout << list.pop() << std::endl;
    //     }
    // }

    const std::vector<double> input{0.5, 250, 150, 3, 0.5};
    int portions{6};
    auto a = lasagna_master::scaleRecipe(input, portions);
    // std::cout << a << std::endl;

    for (int i = 0; i < a.size(); i++)
        std::cout << a[i] << std::endl;

    //std::cin.get();
}