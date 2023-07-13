#include <iostream>
#include <string>

class Student
{
public:
    Student() {}
    Student(int id, std::string name) : id_{id}, name_{name} {}
    const std::string name() { return name_; }
    int ID() const { return id_; }
    int &ID() { return id_; }

private:
    int id_;
    std::string name_;
};

int main()
{
    Student student_one;
    std::cout << student_one.ID() << std::endl;
    student_one.ID() = 10;
    std::cout << student_one.ID() << std::endl;
}
    