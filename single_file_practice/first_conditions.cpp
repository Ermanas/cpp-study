#include <iostream>

int main(int argc, char const *argv[])
{
    int condition_var = 5, user_input = 0;

    std::cout << "Guess a number from 1 to 10: ";
    std::cin >> user_input;

    if (user_input == condition_var)
    {
        std::cout << "Your guess is correct!" << std::endl;
        std::cout << "\nNow I want you to guess another number from 1 to 3 for your gift: ";
        std::cin >> user_input;

        switch (user_input)
        {
        case 1:
            std::cout << "A Teddy Bear" << std::endl; 
            break;
        case 2:
            std::cout << "A Diecast Mercedes W115" << std::endl;
            break;
        case 3:
            std::cout << "A Hershey Chocolate" << std::endl; 
        default:
            break;
        }
    }
    else
    {
        std::cout << "Try Again :(" << std::endl;
    }

    return 0;
}
