// return by reference will allow to return the reference of function variable
#include <iostream>
using namespace std;
int &fun(int &a)
{
    cout << a << endl;
    return a;
}
int main()
{
    int x = 10;
    fun(x) = 20;
    cout << x << endl;
    return 0;
}