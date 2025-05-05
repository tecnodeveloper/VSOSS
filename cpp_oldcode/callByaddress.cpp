//call by address will take the address of actual parameter and pass to formal paramter pointer.
#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;  //formal parameter must be pointer
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 10, y = 20;
    swap(&x,&y);       //Address of actual parameter
    cout<<x<<" "<<y;
    return 0;
}