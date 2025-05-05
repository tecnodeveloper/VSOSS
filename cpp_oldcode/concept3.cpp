//For linear search program
#include "iostream"
using namespace std;
int main()
{
    int A[10],n{10},i,key;
    cout<<"Input elements of array: ";
    for (i = 0; i < A[10]; i++) {
        cin>>A[i];
    }
    cout<<"Enter key for linear search: ";
    cin>>key;
    for ( i = 0; i < n; i++) {
        if(key == A[i])
        {
            cout<<"We found at index "<<i;
        }
        return 0;
    }
    cout<<"Not found";
}