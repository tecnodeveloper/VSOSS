//SUm of array element
#include <iostream>
using namespace std;

int main()
{
    int arr[7]={23,20,123,21,34,43},sum{0};
    for (int i = 0; i < 6; i++)
    {
        sum+=arr[i];
    }
    cout<<"Sum is: "<<sum;
    return 0;
}