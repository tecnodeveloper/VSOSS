//this-> pointer is used for memeber function only it is not used by friend function bcz they are not member
#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breath;

public:
    Rectangle(int length, int breath)
    {
        this->length = length;
        this->breath = breath;
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