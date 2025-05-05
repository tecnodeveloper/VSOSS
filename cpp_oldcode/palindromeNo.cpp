// If the reverse of number is same as orignal number(1221 = 1221)
#include <iostream>
using namespace std;
int main()
{
    int r, rev = 0, n, p;
    cout << "Enter No for check pallindrome: ";
    cin >> n;
    p = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }
    cout << "Reverse of No: " << rev << endl;
    if (rev == p)
        cout << p << " No is pallindrome" << endl;
    else
        cout << "No is not pallindrome";

    return 0;
}
