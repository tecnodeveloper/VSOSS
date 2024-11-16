// cin.get will not input second time bcz of clearing input buffer to clear input buffer we use cin.ignore() function
#include <iostream>
using namespace std;
int main()
{
    char s[20];
    char s2[20];
    cout << "Enter your name: ";
    cin.get(s, 20);

    cin.ignore(); // Here if you not write cin.ignore the input buffer will not be clear.

    cout << "Enter your name again: ";
    cin.get(s2, 20);
    return 0;
}