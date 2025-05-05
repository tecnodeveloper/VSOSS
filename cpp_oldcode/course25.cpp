//Finding largest integer among them.
#include "iostream"
using namespace std;
int main()
{
    int arr[6]={1,23,34,5,4,32},max{arr[0]};
    for (int i = 1;i<7; i++) {
        if (arr[i]>max)
            max=arr[i];
    }
    cout<<max;
    return 0;
}