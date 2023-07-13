#include <iostream>
#include <string>

int someFunc(int a, int b);
int someFunc(int a, int b, int c);
int someFunc(float a);
int someFunc(double a);
std::string someFunc(std::string a);
// Can't define like this
// int someFunc(std::string a);

int main()
{
    auto test = 1.0f;
    std::cout << someFunc(1, 2) << std::endl;
    std::cout << someFunc(1, 2, 3) << std::endl;
    std::cout << someFunc(2.0f) << std::endl;
    std::cout << someFunc("Test Code") << std::endl;

    return 0;
}

int someFunc(int a, int b)
{
    return a + b;
}

int someFunc(int a, int b, int c)
{
    return 0 - a - b - c;
}

int someFunc(float a)
{
    return 10 * a;
}

int someFunc(double a)
{
    return 20 * a;
}

std::string someFunc(std::string a)
{
    return "string";
}