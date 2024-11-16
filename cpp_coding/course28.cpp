//Binary search program for input and output
#include "iostream"
using namespace std;
int main()
{
    int mid,key,l{0},h{9},a[10],n{10};
    cout<<"Input array element: ";
    for(int i = 0; i < n; i++)
    {
        cin>>a[10];
    }
    cout<<"Enter the key to search in binary: ";
    cin>>key;
    while (l <= h)
    {
        mid = (l + h)/2;
        if(key == a[mid])
        {
            cout<<"Found at"<<mid;
        }
        else if(key < a[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
}