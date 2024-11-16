//Program for checking number is GCD or not Highest common factor divisible
#include "iostream"
using namespace std;
int main()
{
    int n,m,rem;
    cout<<"Input two integer for GCD: ";
    cin>>n>>m;
    while (m != n)
    {
        if(m > n)
            m = m - n;
        else if (n > m)
            n = n - m;
    }
    cout<<"GCD is: "<<m;
}
