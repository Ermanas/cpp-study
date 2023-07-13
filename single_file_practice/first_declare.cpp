#include <iostream>

// Declare the function
// if you compile without declaration you'll see this error
// first_declare.cpp:8:18: error: use of undeclared identifier 'SumVal'
// When you declare first, you're allow to define wherever you want
int SumVal(const int& a, int b);

int main()
{
    int blah = 2;
    int a = SumVal(blah, 3);
    std::cout << "The sum of blah + 3 = " << a << std::endl;
    std::cout << "The blah = " << blah << std::endl;

}

// Define the function
// if you compile without definition, you'll see this error
// first_declare.cpp:(.text+0x13): undefined reference to `SumVal(int, int)'
int SumVal(const int& a, int b)
{
    //a = 10;
    return a + b;
}
