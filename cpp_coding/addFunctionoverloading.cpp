// Function overlaoding concept is only available only in C++
// You can use same name but differnt argument or data-type
// The return type is not consider in operator overloading(same name but different argument)
#include <iostream>
using namespace std;
//! 1
int add(int a, int b)
{
    return a + b;
}
//! 2
int add(int a, int b, int c)
{
    return a + b + c;
}
//! 3
int add(float a, float b)
{
    return a + b;
}
//! 4
float add(float a, int b)
{
    return a + b;
}
int main()
{
    cout << "2 overload function will run " << add(5, 4, 6) << endl;
    cout << "1 overload function will run " << add(4, 6) << endl;
    cout << "4 overload function will run " << add(4.23f, 6) << endl;
    cout << "3 overlaod function will run " << add(4.23f, 6.232f) << endl;
    return 0;
}