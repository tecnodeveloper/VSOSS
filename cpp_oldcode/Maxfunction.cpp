// Function are small piece of code that perform specific task
#include <iostream>
using namespace std;
int max(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{

    cout << max(5, 7, 9) << endl;
    cout << max(5, 7, 4) << endl;
    return 0;
}