// strstr(main,sub) the sub will find its occurence in main string if it found then print it and if not found give error
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s1[20] = "Programming";
    char s2[20] = "m";
    if (strstr(s1, s2) != NULL)
        cout << strstr(s1, s2) << endl;
    else
        cout << "Not found";
    return 0;
}