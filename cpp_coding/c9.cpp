//four types of constructor 
//Defualt constructor
//Parameterized constructor
//Non parameterized constructor
//Copy constructor
#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breath;

public:
    //Defualt construtor & Non parameterized constructor
    Rectangle()
    {
        length = 1;
        breath = 1;
    }
    //Parameterized constructor
    Rectangle(int l, int b)
    {
        length = l;
        breath = b;
    }
    //Copy Constructor(means copy of one constructor to another)
    Rectangle(Rectangle &r)
    {
        length=r.length;
        breath=r.breath;
    }
    void setLength(int l)
    {
        if (l > 0)
            length = l;
        else
            length = 0;
    }
    void setBreath(int b)
    {
        if (b > 0)
            breath = b;
        else
            breath = 0;
    }
    int getLength()
    {
        return length;
    }
    int getBreath()
    {
        return breath;
    }
    int area()
    {
        return length * breath;
    }
    int perimeter()
    {
        return 2 * (length + breath);
    }
};
int main()
{
    Rectangle r1(10,5);
    //Copy constructor copy the values of r1 to r2
    Rectangle r2(r1);
    cout<<r2.area();

    return 0;
}