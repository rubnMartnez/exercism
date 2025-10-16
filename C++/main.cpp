#include "main.h"
#include "simple_linked_list.h"

int main()
{
    {
        simple_linked_list::List list{};

        for (int i = 0; i < 5; i++) {
            list.push(i);
        }

        list.reverse();

        for (int i = 0; i < 5; i++) {
            std::cout << list.pop() << std::endl;
        }
    }

    // auto a = matching_brackets::check("}");
    // std::cout << a << std::endl;

    // for (int i = 0; i < a.size(); i++)
    //     std::cout << a[i] << std::endl;

    //std::cin.get();
}