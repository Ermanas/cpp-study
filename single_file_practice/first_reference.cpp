#include <iostream>

int main()
{
    float original_var = 3.14;
    float& ref_var = original_var;
    const float& kRefVal = original_var;

    std::cout << "The normal reference of the variable = " << ref_var << std::endl;
    original_var *= 2;
    std::cout << "Variable is changed = " << original_var << std::endl;
    ref_var *= 2;
    std::cout << "Reference is changed = " << kRefVal << std::endl;

}
