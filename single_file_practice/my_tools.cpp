#include <iostream>
#include <vector>
#include "my_tools.h"

void Print_Vector(std::vector<int> vec)
{
    for (const int &num : vec)
    {
        std::cout << num << " - ";
    }
    std::cout << std::endl;
}
