// Class string is used to display string it is automatically managed by compiler
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s1, s2;
    cout << "Enter string: " << endl;
    getline(cin, s1);
    cout << "String is: " << s1 << endl;
    cout << "Enter string again: " << endl;
    getline(cin, s2);
    cout << "String is: " << s2 << endl;
    return 0;
}