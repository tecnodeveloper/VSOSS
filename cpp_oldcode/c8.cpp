// geter and seter function are used to reterive and assign value geter() value is used to get(reterive) seter() value is used to set value
#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breath;

public:
    void setLength(int l)
    {
        // Here is validation set at mutator or access at property function
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
    Rectangle r1, r2;
    r1.setLength(20);
    r1.setBreath(10);
    cout << "Length is: " << r1.area() << endl;
    cout << "Breath is: " << r1.perimeter() << endl;
    return 0;
}