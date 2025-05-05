//s.replace(first, second, "KK") is used to replace the string at given index first means at which index you replace second how many letter you want to replace
#include<iostream>
using namespace std;
int main()
{
    string s = "Programming";
    //3 is starting point of replacing
    //5 is how many words you want to replace from string
    s.replace(3,5,"AAAA");
    cout<<s;
    return 0;
}