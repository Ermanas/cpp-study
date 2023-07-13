#include <iostream>

int main()
{
    int a = 0.1;
    char b = 'c';
    std::cout << a + b << std::endl;
    std::cout << typeid(a).name() << std::endl;
    return 0;
}