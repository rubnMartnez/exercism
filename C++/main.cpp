#include "main.h"
#include "alphametics.h"

int main()
{
    {
        // troy::human human1{};
        // troy::human human2{};

        // troy::give_new_artifact(human1, "art1");
        // troy::give_new_artifact(human2, "art2");
        // std::cout << "human1 poss -> " << (human1.possession ? human1.possession->name : "null") << std::endl;
        // std::cout << "human2 poss -> " << (human2.possession ? human2.possession->name : "null") << std::endl;
        // troy::exchange_artifacts(human1.possession, human2.possession);
        // std::cout << "human1 poss -> " << (human1.possession ? human1.possession->name : "null") << std::endl;
        // std::cout << "human2 poss -> " << (human2.possession ? human2.possession->name : "null") << std::endl;

        // for (int i = 0; i < 5; i++) {
        //     std::cout << list.pop() << std::endl;
        // }
    }

    // const std::vector<double> input{0.5, 250, 150, 3, 0.5};
    // int portions{6};
    auto a = alphametics::solve("ACA + DD == BD");
    if (a.has_value()){
        if (a.value().empty())
            std::cout << "empty\n";
        else
            std::cout << a.value() << std::endl;
    }
    else
        std::cout << "not valid\n";

    // for (int i = 0; i < a.size(); i++)
    //     std::cout << a[i] << std::endl;

    // std::cin.get();
}