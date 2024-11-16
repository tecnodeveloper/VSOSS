// Convert No into english word
#include <iostream>
using namespace std;
int main()
{
    int a, r, rev = 0, n;
    cout << "Enter no for display in english: ";
    cin >> n;

    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        switch (r)
        {
        case 1:
            cout << " One";
            break;
        case 2:
            cout << " Two ";
            break;
        case 3:
            cout << " Thre ";
            break;
        case 4:
            cout << " Four";
            break;
        case 5:
            cout << " Five";
            break;
        case 6:
            cout << " Six";
            break;
        case 7:
            cout << " Seven";
            break;
        case 8:
            cout << " Eight";
            break;
        case 9:
            cout << " Nine";
            break;
        }
    }

    return 0;
}