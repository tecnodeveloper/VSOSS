// Scope resolution
// We first write the function and then write main() function and if we really want to known how these function works then scroll down to see
// Create function inside class and implement outside the class using scope resolution
#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breath;

public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    int getLength() { return length; } // Inline function
    int getBreath() { return breath; }
    void setLength(int l);
    void setBreath(int b);
    int area();
    int parameter();
    bool isSquare();
    ~Rectangle();
};
int main()
{
    // creating object
    Rectangle r1(10, 10);
    cout << r1.area() << endl;
    if (r1.isSquare())
        cout << "Yes square" << endl;
    return 0;
}
// Defualt constructor & Non parameterized constructor
Rectangle::Rectangle()
{
    length = 1;
    breath = 1;
}
// Parameterized constructor access using Scope resolution (::)
Rectangle::Rectangle(int l, int b)
{
    length = l;
    breath = b;
}
// Copy construtor
Rectangle::Rectangle(Rectangle &r)
{
    length = r.length;
    breath = r.breath;
}
//! Data type is given to set length mutator
void Rectangle::setLength(int l)
{
    length = l;
}
//! Data type to mutator
void Rectangle::setBreath(int b)
{
    breath = b;
}
//! area() with int data type
int Rectangle::area()
{
    return length * breath;
}
int Rectangle::parameter()
{
    return 2 * (length + breath);
}
bool Rectangle::isSquare()
{
    return length == breath;
}
// Destructor is called using tild sign and same name of constructor
Rectangle::~Rectangle()
{
    cout << "Destructor is called";
}