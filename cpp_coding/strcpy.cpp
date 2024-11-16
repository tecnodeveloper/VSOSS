// strcpy will copy content of one string to another string
#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;
int main()
{
    char s1[20] = "";
    char s2[20] = "World";

    cout << "Before String1 copy: " << s1 << endl;
    cout << "Before String2 copy: " << s2 << endl;

    // strcpy(s1,s2);
    strncpy(s1, s2, 3);
    cout << endl;
    cout << "String 2 content copy to string1: " << s1 << endl;
    return 0;
}