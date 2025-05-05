// OOP concept Constructor
#include <iostream>
using namespace std;
class Rectangle
{
public:
    int l, b;
    Rectangle() // * Defualt constructor - no arguments
    {
        l = 0;
        b = 0;
    }
    Rectangle(int x, int y) // * Paremeterized constructor will take parameter as value
    {
        l = x;
        b = y;
    }
    Rectangle(Rectangle &r) // * Copy constructor can copy one constructor object to another
    {
        l = r.l;
        b = r.b;
    }
    ~Rectangle()
    {
        cout << "Destructor is called when object is deleted" << endl;
    }
};
int main()
{
    Rectangle *r1 = new Rectangle; // Making object
    cout << r1->l << " " << r1->b << endl;
    delete r1;
    Rectangle r2(5, 6);
    cout << r2.l << " " << r2.b << endl;
    Rectangle r3 = r2;
    cout << r3.l << " " << r3.b << endl;
    return 0;
}