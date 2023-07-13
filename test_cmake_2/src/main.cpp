#include <iostream>
#include "hello.h"
#include "blah.h"

int main()
{
    std::cout << "Hello Tatlim!" << std::endl;
    PrintHello();
    std::cout << Sum(1, 2) << std::endl;
    return 0;
}
