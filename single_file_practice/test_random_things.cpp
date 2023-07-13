#include <iostream>
#include <string>
using namespace std; // Save space on slides.
void Print(const string &str)
{
	cout << "lvalue: " << str << endl;
}
void Print(string &&str)
{
	cout << "rvalue: " << str << endl;
	string test = str;
	test = "test";
}
int main()
{
	string hello = "hi";
	Print(hello);
	Print("world");
	Print(std::move(hello));
	Print(hello);
	// DO NOT access "hello" after move!
	return 0;
}