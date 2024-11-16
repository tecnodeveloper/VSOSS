//function that take two parameter as input and add them
#include<iostream>
using namespace std;
int add(int x,int y)
{
    //Write return rather than cout, cin
    
    int z = x + y;
    return z;
}
int main()
{
    cout<<add(2,5);
    return 0;
}