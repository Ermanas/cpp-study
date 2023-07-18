#include <iostream>
#include "image.h"
// #include "igg_image/io_tools.h"

igg::Image::Image(int rows, int cols) : rows_{rows}, cols_{cols}
{
    data_.resize(rows * cols);
}

// Get image row size
int igg::Image::rows() const { return rows_; }

// Get image column size
int igg::Image::cols() const { return cols_; }

// Get the gray value at specific point
int igg::Image::at(int rows, int cols) const
{
    return data_[cols_ * (rows - 1) + cols - 1];
}

// Set the gray value at specific point
int &igg::Image::at(int rows, int cols)
{
    return data_[cols_ * (rows - 1) + cols - 1];
}

void igg::Image::WriteToPgm(const std::string &file_name)
{
    igg::io_tools::ImageData TransferImage;
    TransferImage.cols = cols_;
    TransferImage.rows = rows_;
    TransferImage.max_val = max_val_;
    TransferImage.data = data_;

    igg::io_tools::WriteToPgm(TransferImage, file_name);
}

bool igg::Image::FillFromPgm(const std::string &file_name)
{
    igg::io_tools::ImageData TransferImageToWrite;
    TransferImageToWrite = igg::io_tools::ReadFromPgm(file_name);

    cols_ = TransferImageToWrite.cols;
    rows_ = TransferImageToWrite.rows;
    max_val_ = TransferImageToWrite.max_val;
    // data_.resize(TransferImageToWrite.cols * TransferImageToWrite.rows);
    data_.swap(TransferImageToWrite.data);
    return true;
}

std::vector<float> igg::Image::ComputeHistogram(int bins) const
{
    // UNFINISHED FUNCTION
    std::vector<float> CalculatedHistogram(bins, 0);
    CalculatedHistogram[0] = 0;

    for (int i = 0; i < bins; ++i)
    {
        for (const int &num : data_)
        {
            if (num < (256 / (float)bins * (i + 1)) && (num >= (256 / (float)bins * i)))
            {
                CalculatedHistogram[i] += 1;
            }
        }
    }

    return CalculatedHistogram;
}

void igg::Image::DownScale(int scale)
{
    igg::io_tools::ImageData ScaledImage;
    ScaledImage.cols = cols_ / scale;
    ScaledImage.rows = rows_ / scale;
    ScaledImage.max_val = 255;
    ScaledImage.data.resize(ScaledImage.cols * ScaledImage.rows);
    
    for (int row = 0; row < ScaledImage.cols; row++)
    {
        for (int column = 0; column < ScaledImage.rows; column++)
        {
            ScaledImage.data[ScaledImage.cols * row + column] = data_.at(cols_ * row * scale + column * scale);
        }
    }

    cols_ = ScaledImage.cols;
    rows_ = ScaledImage.rows;
    data_ = ScaledImage.data;


    // The version below is now working because the image
    // in a vector with a row major order.
    ////
    // cols_ = cols_ / scale;
    // rows_ = rows_ / scale;

    // std::cout << "Data Size: " << data_.size() << std::endl;

    // for (size_t i = 0; i < data_.size()/(scale*scale); i++)
    // {
    //     data_[i] = data_[i*scale*scale];
    //     std::cout << i << " - " << i * scale*scale << std::endl;
    // }
}
