// strtok() will tokenize the string based on symbol that are using here.
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s1[30] = "x=10;y=20;z=30";
    char *token = strtok(s1, "=;");
    // ? while loop used to get all value
    while (token != NULL)
    {
        cout << token << endl;
        cout << endl;
        token = strtok(NULL, "=;");
    }
    return 0;
}