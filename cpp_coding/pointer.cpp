// Pointer concept
#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int *p;
    p = &x;

    cout <<"Value of X: "<< x << endl;                       
    cout <<"Address of X: "<< &x << endl;                   
    cout <<"Address of X store in p: "<< p << endl;
    cout <<"Address of P: "<< &p << endl;
    cout <<"Value of x derefercing through p: "<< *p << endl;
    return 0;
}