//Finding average of matrix
#include "iostream"
using namespace std;
int main() {
    int n;       //Input how many number of elements a user want to take average
    float num[100],sum{0.0},average;
    cout<<"Enter the number of elements: ";
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cout<< i + 1 <<". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }
    average = sum / n;
    cout<<"Average of array elements: "<<average;
    return 0;
}