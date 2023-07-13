#include <iostream>

int someFunc(int a, int b = 10);
double FindCircleArea(double radius, double piNumber = 3.14);

int main()
{
    double user_input;

    std::cout << someFunc(1) << std::endl;
    std::cout << someFunc(1,3) << std::endl;
    std::cout << "Enter radius to calculate the areo of the circle: ";
    std::cin >> user_input;
    std::cout << FindCircleArea(user_input, 3) << std::endl;
    
    return 0;
}

int someFunc(int a, int b)
{
    return a + b;
}

double FindCircleArea(double radius, double piNumber)
{
    return radius * radius * piNumber;
}