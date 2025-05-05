// Just like sizeof() the strlen will be used to calculate string length
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[20];
    cout << "Enter string: ";
    cin.getline(s, 20);
    cout << "Welcome: Mr " << s << endl;
    cout << strlen(s) << endl; // strlen return length of string
    return 0;
}
//
//
//
//

// // Using pointer
// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//     char *p = new char[100];      //Pointer are using dynamic memory allocation using new operator
//     cout << "Enter string: ";
//     cin.getline(p, 100);
//     cout << strlen(p) << endl; // strlen return length of string
//     delete[] p;      //delete operator is used to deallocate memory at runtime
//     return 0;
// }