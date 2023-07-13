#include <vector>
#include <algorithm>
#include <numeric>
#include "SumVec.h"

int SumVec(std::vector<int> vec)
{
    return std::accumulate(vec.begin(), vec.end(), 0);
}