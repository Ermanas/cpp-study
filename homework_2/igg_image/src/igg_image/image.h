#pragma once

#include <vector>
#include "io_tools.h"

namespace igg
{

  class Image
  {
  public:
    Image() {};
    Image(int rows, int cols);
    
    // Get image row size
    int rows() const;

    // Get image column size
    int cols() const;

    // Get the gray value at specific point
    int at(int rows, int cols) const;

    // Set the gray value at specific point
    // Only accepts uint8 values
    int &at(int rows, int cols);

    bool FillFromPgm(const std::string& file_name);
    void WriteToPgm(const std::string& file_name);

    // Calculate Histogram for the specified number of bins.
    std::vector<float> ComputeHistogram(int bins) const;

  private:
    int rows_ = 0;
    int cols_ = 0;
    int max_val_ = 255;
    std::vector<int> data_;
  };

} // namespace igg
