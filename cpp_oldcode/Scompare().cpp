//s.compare() will compare two string || if string are equal then its zero || if 1-string is less than 2-string then it will print negative || if 1-string is greater than 2-string it will print positive
#include<iostream>
using namespace std;
int main()
{
    string s = "Hello";
    string p = "hello";
    if(s.compare(p) == 0)
    cout<<"String are equal";
    else if(s.compare(p) > 0)
    cout<<"1-string are greater than 2-string";
    else
    cout<<"1-string are less than 2-string";
    return 0;
} 