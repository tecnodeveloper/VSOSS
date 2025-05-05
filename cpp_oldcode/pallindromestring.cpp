// Find the string is pallendrome or not
#include <iostream>
using namespace std;
int main()
{
    string s = "Madam";
    // Taking string of rev and intialize with 0
    //Change Upper case To lower case
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 65 && s[i] <= 95)
        {
            s[i] += 32;
        }
    }

    string rev = "";
    int len = s.length();                           // storing length of s in variable len
    rev.resize(len);                                // Changing the length of rev to s by resize
    for (int i = 0, j = len - 1; i < len; i++, j--) // using for loop to iterate from last char
                                                    // i 0 1 2 3 4 5
                                                    // j 5 4 3 2 1 0
    {
        rev[i] = s[j]; // Element of s[j] is copied into rev[i]
    }
    rev[len] = '\0';         // After ending for loop the string must be terminate
    if (s.compare(rev) == 0) // compare function will return 0 if both string are same
        cout << "String is pallindrome" << endl;
    else
        cout << "String is not pallindrome" << endl;
    return 0;
}