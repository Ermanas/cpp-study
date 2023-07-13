#include <iostream>
#include "image.h"
#include "io_tools.h"
#include <numeric>

int main()
{
    igg::Image Sample_Image(10, 10);

    for (int rows = 1; rows <= Sample_Image.rows(); rows++)
    {
        for (int cols = 1; cols <= Sample_Image.cols(); cols++)
        {
            Sample_Image.at(rows, cols) = 170;
        }
    }

    std::string read_file_name = "/media/rnd/108285D08285BB2C/Users/Ermanas/Documents/code/cpp_modern/homework_2/igg_image/data/lena.ascii.pgm";
    Sample_Image.FillFromPgm(read_file_name);

    std::string my_file_name = "/home/rnd/test_image.pgm";
    Sample_Image.WriteToPgm(my_file_name);
    
    std::vector<float> CalculatedHistogram;
    CalculatedHistogram = Sample_Image.ComputeHistogram(2);

    for (const float& num : CalculatedHistogram)
    {
        std::cout << num << std::endl;
    }

    std::cout << std::accumulate(CalculatedHistogram.begin(), CalculatedHistogram.end(), 0) << std::endl;
}
