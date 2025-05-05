//Array which input its element
#include <iostream>
using namespace std;

int main()
{
    int size{5},array[size];
    cout<<"Input 5 size of Array Element: ";
    for (int i{0}; i < size; i++)           //Array can be used to display same datatype element in one statement
    {
        cin>>array[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}