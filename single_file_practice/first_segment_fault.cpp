// When you change the return type a function to a reference
// The compiler will complain about it because after the function returns,
// the variables inside of it's scope will be deleted. If you call it with
// a reference, you'll probably and luckly end up with a segmentation fault.
// But somehow clang++ is able to create a binary file with a warning but 
// it works without a segmentation fault. When you compile with c++,
// it throws a segmentation fault.

#include <iostream>

int& test_func(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main(int argc, char const *argv[])
{
    int test_result = test_func(1,2);
    std::cout << test_result << std::endl; 
    return 0;
}
