#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include "MultiVec.h"

int MultiVec(std::vector<int> vec)
{
    return std::accumulate(vec.begin(), vec.end(), 1, std::multiplies<int>());
}