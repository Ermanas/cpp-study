#include <bits/stdc++.h>

using namespace std;

class Box
{

public:
    Box() : l_{0}, b_{0}, h_{0} {};
    Box(int l, int b, int h) : l_{l}, b_{b}, h_{h} {};
    Box(Box &box) : l_{box.l_}, b_{box.b_}, h_{box.h_} {};

    int getLength() const { return l_; }
    int getBreadth() const { return b_; }
    int getHeight() const { return h_; }
    long long CalculateVolume() const { return 1LL * l_ * b_ * h_; }
    bool operator<(Box &b)
    {
        Box new_box;

        if (new_box.l_ < b.l_)
            return true;
        else if (new_box.b_ < b.b_ && new_box.l_ == b.l_)
            return true;
        else if (new_box.h_ < b.h_ && new_box.b_ == b.b_ && new_box.l_ == b.l_)
            return true;
        else
            return false;
    }

private:
    int l_, b_, h_;
};
ostream &operator<<(ostream &out, const Box &B)
{
    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
    return out;
}

// Implement the class Box
// l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

// Overload operator < as specified
// bool operator<(Box& b)

// Overload operator << as specified
// ostream& operator<<(ostream& out, Box& B)

void check2()
{
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            cout << temp << endl;
        }
        if (type == 2)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }
        if (type == 3)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp)
            {
                cout << "Lesser\n";
            }
            else
            {
                cout << "Greater\n";
            }
        }
        if (type == 4)
        {
            cout << temp.CalculateVolume() << endl;
        }
        if (type == 5)
        {
            Box NewBox(temp);
            cout << NewBox << endl;
        }
    }
}

int main()
{
    check2();
}