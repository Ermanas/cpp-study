#include <iostream>
#include <string>

using std::string;

class Home
{
private:
    int price_;
    int bedroom_;
    int bathroom_;
    int floor_;
    float area_;
    string city_;

public:
    Home(int price, int bedroom, int bathroom, int floor, float area, string city) : price_{price}, bedroom_{bedroom}, bathroom_{bedroom}, floor_{floor}, area_{area}, city_{city} {}
    int price() const { return price_; }
    int bedroom() const { return bedroom_; }
    int bathroom() const { return bathroom_; }
    int floor() const { return floor_; }
    float area() const { return area_; }
    string city() const { return city_; }
    float CalcMonthlyPrice(int max_monthly_payment)
    {
        float calc_month = Home::price()/max_monthly_payment;
        return calc_month;
    }
};

int main()
{
    Home Uskudar{3000000, 2, 1, 1, 130, "Istanbul"};
    std::cout << "The area of the home: " << Uskudar.area() << "m²" << std::endl;
    float userinput;
    std::cin >> userinput;
    std::cout << "It'll take " << Uskudar.CalcMonthlyPrice(userinput) << " months to own the house." << std::endl;
    return 0;
}