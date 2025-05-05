#include "iostream"
using namespace std;
int main()
{
    int A[7] = { 2,4,6,8,10,12,14};
    int max = INT_MAX;        //max has bigest number of integer
    for (int i = 0; i < 7; i++) {
        if(A[i] < max)
        max=A[i];
    }
    cout<<"Maximum of array elements: "<<max;
}