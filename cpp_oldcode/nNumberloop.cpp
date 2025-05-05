// Print first 10 natural no using while or dowhile
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, i = 1;
//     cout << "Enter n: ";
//     cin >> n;
//     while (i < n)
//     {
//         cout << i << endl;
//         ++i;
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "Enter n: ";
    cin >> n;
    do
    {
        cout << i << endl;
        ++i;
        // If i do condition false then the do part will run and then condition(false) will check so it will execute one time.
    } while (i < n);
    return 0;
}
