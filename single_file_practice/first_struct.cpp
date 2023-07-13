#include <iostream>
#include <string>

struct first_struct
{
    int num;
    std::string name;
};

void PrintStruct(const first_struct &test_str)
{
    std::cout << "Number: " << test_str.num << std::endl;
    std::cout << "Name: " << test_str.name << std::endl;
}

int main()
{
    first_struct test_struct;
    test_struct.num = 13;
    test_struct.name = "Ermanas";

    first_struct test_struct_2{1, "Furkan"};
    PrintStruct(test_struct);
    PrintStruct(test_struct_2);
    return 0;
}
