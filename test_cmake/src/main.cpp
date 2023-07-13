#include <iostream>
#include <vector>
#include "SumVec.h"
#include <MultiVec.h>

int main()
{
    std::vector<int> test_vec = {1, 2 ,3};
    std::cout << SumVec(test_vec) << std::endl;
    std::cout << MultiVec(test_vec) << std::endl;
    return 0;
}
