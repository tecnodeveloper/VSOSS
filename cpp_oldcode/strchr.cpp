// strchr() built-in function can search the character from string
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s1[20] = "Programming";

    cout << "Finding character in string " << strchr(s1,'r')<<endl;
    cout << "Finding character in string from right " << strrchr(s1,'r')<<endl;
    return 0;
}