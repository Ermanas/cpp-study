#include <iostream>
#include <string>

int main() {
    std::string first_string = "Welcome";
    std::string second_string = "World";    

    std::cout << first_string + " to this " + second_string + " Dear ";
    std::string name_input = "";
    std::cin >> name_input;
    return 0;
}