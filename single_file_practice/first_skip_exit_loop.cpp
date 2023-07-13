#include <iostream>

int main()
{
    int user_input = -1;
    std::cout << "Enter some number to see what's gonna happen" << std::endl;

    while (true)
    {
        std::cin >> user_input;
        if (user_input == 5)
            break;

        if (user_input == 1)
            continue;
        else
            std::cout << "Wrong Number" << std::endl;
    }
}