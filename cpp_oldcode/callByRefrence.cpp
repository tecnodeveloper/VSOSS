// call by reference refers to actual parameter pass as reference. Actual parameter are directly accessed by formal parameter
#include <iostream>
using namespace std;
void swap(int &a, int &b) // formal parameter take referenece of actual parameter
{
    int temp;
    temp = a; // function machine code is copied into calling function(main()) such function are called inline function and these are created automatically by compiler
    a = b;
    b = temp;
}
int main()
{
    int x = 10, y = 20;
    swap(x, y);
    cout << x << " " << y;
    return 0;
}