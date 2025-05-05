// Creating object in heap using new operator and pointer
#include <iostream>
using namespace std;
class Rectangle
{
public:
    int l, b;
    int area()
    {
        return l * b;
    }
    int per()
    {
        return 2 * (l + b);
    }
};
// -> hypen + less than sign is used instead of . dot
int main()
{
    // Rectangle r1;
    // Rectangle *p;    //creating pointer of using userdefined datatype
    // p = &r1;         //taking address of variable in pointer

    Rectangle *p = new Rectangle; // creating object dynamically in heap

    p->l = 10;
    p->b = 5;
    cout << p->area() << endl;
    cout << p->per() << endl;
}