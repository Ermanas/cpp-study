#include <iostream>

int main()
{
    const int kTestConst = 200;

    std::cout << "The wheel diameter of the AMR is " << kTestConst << " mm." << std::endl;

    // If you try to change the const, the compiler will complain about it.
    // kTestConst = 25;
}
