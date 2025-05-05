// program for finding greatest common diviser
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter two no: ";
    cin >> n >> m;
    while (n != m)
    {
        if (m > n)
            m = m - n;
        else if (m < n)
            n = n - m;
    }
    cout << "GCD of 2 no: " << m <<" "<<n;
    return 0;
}