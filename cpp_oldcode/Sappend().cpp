//s.append("bye") will add new content at the end of string(Dev C++)
#include<iostream>
using namespace std;
int main()
{
    string s = "Hello";
    cout<<"Before Append capacity of string: "<<s.capacity()<<" "<<s.length()<<endl;
    //append will come at the end of string
    s.append(" World");
    cout<<"After Append capacity of string: "<<s.capacity()<<" "<<s.length()<<endl;
    cout<<s<<endl;
    return 0;
} 