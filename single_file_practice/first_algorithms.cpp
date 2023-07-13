#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

void PrintVector(std::vector<int> vec);

int main()
{
    std::string test_st = "s";
    std::vector<int> test_vec = {5, 7, 1, 23, 76, 5, 11};
    PrintVector(test_vec);
    std::sort(test_vec.begin(), test_vec.end());
    PrintVector(test_vec);
    int vec_sum = std::accumulate(test_vec.begin(), test_vec.end(), 0);
    int vec_mul = std::accumulate(test_vec.begin(), test_vec.end(), 1, std::multiplies<int>());

    std::cout << vec_sum << std::endl;
    std::cout << "Vector members' multiplication = " << vec_mul << std::endl;
    return 0;
}

void PrintVector(std::vector<int> vec)
{
    for (const int &num : vec)
    {
        std::cout << num << " - ";
    }
    std::cout << std::endl;
}