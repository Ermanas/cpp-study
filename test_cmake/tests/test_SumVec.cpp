#include <gtest/gtest.h>
#include <iostream>
#include <vector>
#include "SumVec.h"

std::vector<int> testVec = {1, 2};

TEST(test_SumVec, EqualSumCheck)
{
    EXPECT_EQ(3, SumVec(testVec));
}
