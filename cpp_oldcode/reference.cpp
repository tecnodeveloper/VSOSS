// Reference is very powerfull feature of C++ it is not available in any other language (&)
// Reference is just like nickname
// it does't occupy memory
// Once you give reference you cannot use same referernce at any place of program
#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int &y = x;
    x++;
    ++y;
    cout << "Value of x:" << x << endl;
    cout << "Value of reference to x: :" << y << endl;
    cout<<"Address of X and Y: "<<&x<<" "<<&y<<endl;
    return 0;
}