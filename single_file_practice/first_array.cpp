#include <iostream>
#include <array>
#include <string>

int main()
{
    std::array<float, 3> first_array = {1.0f, 2.0f, 3.0f};
    std::array<std::string, 2> string_array = {"Hello", "World"};

    for (int i = 0; i < 2; i++)
    {
        std::cout << first_array[i] << std::endl;
        std::cout << string_array[i] << std::endl;
    }

    std::cout << "Total array size: " << first_array.size() + string_array.size() << std::endl;

    // Filling the every element of the string array with an empty ""
    // Fill does not change the size of the array
    string_array.fill("");
    std::cout << std::endl;
    for (int i = 0; i < string_array.size(); i++)
    {
        std::cout << string_array[i] << std::endl;
    }

    first_array.fill(52);
    std::cout << std::endl;
    for (int i = 0; i < first_array.size(); i++)
    {
        std::cout << first_array[i] << std::endl;
    }

    std::cout << string_array.size() << std::endl;
    return 0;
}