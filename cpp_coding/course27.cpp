//Linear search program for sorting in array
#include "iostream"
using namespace std;
int main()
{
    int a[10],n=10,key;
    cout<<"Input array element for searching: ";
    for (int i = 0; i < n; i++) {                  //For loop is used in array to output and input the elements
        cin>>a[i];
    }
    cout<<"Enter key for searching: ";
    cin>>key;
    for (int i = 0; i < n; i++) {
        if (key == a[i])
        cout<<"The key was found at index: "<<i;
    }
    cout<<"There is not key in the array element";
}