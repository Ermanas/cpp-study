#include <gtest/gtest.h>
#include "igg_image/image.h"

TEST(TestImage, AssignTest) {
    igg::Image Sample_Image(5,5);
    Sample_Image.at(1,1) = 127;
    EXPECT_EQ(127, Sample_Image.at(1,1));
}