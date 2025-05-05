// strcmp will compare two string lexicographically
//! If both string are eaual then it print NULL value(0), if s1 is greater than second s2 then +ev and if s1 is smaller then s2 then print -ev;
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s1[20] = "hello";  //return 0 bcz string are same
    char s2[20] = "hello";
    cout << strcmp(s1, s2) << endl; 
    cout << endl;

    char s3[20] = "hello";  //it give positive result bcz h is greter then H
    char s4[20] = "Hello";
    cout << strcmp(s3, s4) << endl;
    cout << endl;

    char s5[20] = "Hello";
    char s6[20] = "hello";
    cout << strcmp(s5, s6) << endl;
    return 0;
}