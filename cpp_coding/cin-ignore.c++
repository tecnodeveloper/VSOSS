// Program without using cin.ignore
// #include<iostream>
// using namespace std;
// int main()
// {
//     int x;
//     string str;
//     cout<<"Enter no";
//     cin>>x;
//     cout<<"Enter string";
//     getline(cin,str);
//     cout<<x;
//     cout<<str;
// }

// Program with using cin.ignore
#include<iostream>
using namespace std;
int main()
{
    int x;
    string str;
    cout<<"Enter no";
    cin>>x;
    cin.ignore();
    cout<<"Enter string";
    getline(cin,str);
    cout<<x;
    cout<<str;
}