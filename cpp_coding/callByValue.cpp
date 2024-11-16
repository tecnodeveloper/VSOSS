// call by value means when the copy is transfer from actual to formal parameter the function perform operation on formal parameter and does't return value back to actual parameter
#include <iostream>
using namespace std;
int swap(int a, int b)
{
    int temp; // create variable that help out for storing swap variable
    temp = a; // The value of a is put on temp variable
    a = b;    // The value of b is put on a
    b = temp; // And b itself take the value of temp(a)

    cout << "Formal parameter value A (Those who copied from actual parameter: )" << a << endl;
    cout << "Formal parameter value B (Those who copied from actual parameter: )" << b << endl;
    cout << endl;
}
int main()
{
    int x = 10, y = 20; // actual parameter
    swap(x, y);
    cout << "Actual parameter value X (Those who give value)" << x << endl;
    cout << "Actual parameter value Y (Those who give value)" << y << endl;
    //Yep he does't change the value of actual parameter
    return 0;
}