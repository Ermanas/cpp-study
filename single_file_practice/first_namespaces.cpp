#include <iostream>

using std::cout;
using std::endl;

// Nested Namespaces
namespace name
{

    namespace first_name
    {
        int my_number = 1;

        void PrintMyName()
        {
            std::cout << "Furkan" << std::endl;
            cout << "Thanks" << endl;
        }
    }

    namespace second_name
    {
        void PrintMyName()
        {
            std::cout << "Ermanas" << std::endl;
        }
    }
} // name

int main()
{
    name::first_name::PrintMyName();
    name::second_name::PrintMyName();
    name::first_name::my_number = 5;
    cout << name::first_name::my_number << endl;
    return 0;
}
