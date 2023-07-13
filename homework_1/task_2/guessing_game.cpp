/*
In this exercise you will write a small “guessing” game. The program will pick a random number
from 0 to 99 and you will be guessing this number by providing your guess through stdin. Depending on
which number you have guessed there are 3 outcomes:
    • You have guessed the number. Then the program has to tell you that you have won.
    • Your number if larger than the target one. The program should tell you that it’s number is smaller.
    • Your number is smaller than the target one. The program should tell you that its number is larger.
The game goes on until you have guessed the number.
*/

#include <iostream>
#include <experimental/random> // This requires C++17

int main()
{
    const int the_number = std::experimental::randint(0, 99);
    int user_guess = -1, user_try = 0;

    std::cout << "Hello! In this game you need to guess a number from 0 to 99.\n\nSo shall we begin? (Press Enter)";
    std::getchar();

    while (user_guess != the_number)
    {
        user_try++;
        while (!(std::cin >> user_guess))
        {
            std::cin.clear();                                                   // clear bad input flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard input
            std::cout << "\nAre you kidding me?\nGuess a proper number:";
        }

        if (user_guess < the_number)
        {
            std::cout << "Ahh! Try to guess a bigger one: ";
        }
        else if (user_guess > the_number)
        {
            std::cout << "Ahh! Try to guess a smaller one: ";
        }
        else
        {
            std::cout << "\nContrats! Right guess!" << std::endl;
            std::cout << "You tried " << user_try << " times! WOW!" << std::endl;
        }
    }

    return 0;
}
