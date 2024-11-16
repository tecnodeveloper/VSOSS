//Basic concept of array how to initialize it.
#include "iostream"
using namespace std;
int main() {
    int n[] = {2, 4, 5, 6, 7, 8};              //Using for loop you can display all array values
    char A[7] = {'Z', 'A', 'I', 'N', 'A', 'L','I'};
    float F[5] = {1.3, 2.34, 23.23, 45.23, 1.32};
    for (int i=0; i<6; i++) {
        cout << n[i];
    }
}