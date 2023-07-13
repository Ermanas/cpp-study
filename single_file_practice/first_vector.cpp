#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<int> first_vector = {1};
    first_vector.reserve(2);
    std::vector<std::string> names_vector;
    std::string get_names = "";

    std::cout << "Size of the vector: " << first_vector.size() << std::endl;
    first_vector.emplace_back(13);
    std::cout << "After we add 1 more element to the back of the vector\nSize: " << first_vector.size() << std::endl;
    first_vector.emplace_back(7);
    std::cout << first_vector.at(0) << std::endl;
    std::cout << "And one more then the size...  " << first_vector.size() << std::endl;

    std::cout << "Add 5 element to the vector: " << std::endl;
    int get_val = 0;

    for (int i = 0; i < 5; i++)
    {
        std::cin >> get_val;
        first_vector.emplace_back(get_val);
    }

    std::cout << "The new size of the vector : " << first_vector.size() << std::endl;
    std::cout << "Ok, now let's add 3 random names to a string vector:" << std::endl;

    for (int i = 0; i < 3; i++)
    {
        std::cin >> get_names;
        names_vector.push_back(get_names);
    }

    std::cout << "The size of the string vector : " << names_vector.size() << std::endl;
    return 0;
}
