#include <iostream>
#include <vector>
#include <string>
#include <limits>

int main()
{
    std::vector<std::string> diseases = {"insomnia", "corona", "flu", "influenza"};
    int selected_disease = 1;

    std::cout << "Choose your disease from 1-4" << std::endl;
    std::cin >> selected_disease;

    while (true)
    {
        if (selected_disease >= 1 && selected_disease <= 4 && !std::cin.fail())
        {
            std::cout << "Your disease is " << diseases[selected_disease - 1] << std::endl;
            break;
        }
        else
        {
            std::cin.clear();
            // std::cin.ignore(256, '\n');
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cerr << "Invalid Number! Please choose your disease from 1-4" << std::endl;
            std::cin >> selected_disease;
        }
    }

    std::cout << "\nDiseases list:" << std::endl;

    for (const std::string &num : diseases)
    {
        std::cout << "- " << num << std::endl;
    }

    int number_in = 0, power_in = 0, total_out = 1;
    std::cout << "\nGive me the number and it's power:" << std::endl;
    std::cin >> number_in >> power_in;

    for (std::size_t i = 0; i < power_in; ++i)
    {
        total_out *= number_in;
    }

    std::cout << "Result: " << total_out << std::endl;
    return 0;
}
