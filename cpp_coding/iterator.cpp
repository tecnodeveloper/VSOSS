// // iterator are used to traverse or access the character of string
// // s.begin()
// // s.end()
// //  reverse_iterator used to traverse in backward direction or right to left
// // s.rbegin() from right to left
// // s.rend() from right to left
// #include <iostream>
// using namespace std;
// int main()
// {
//     string s = "hello";
//     string::iterator it; // Declaring iterator
//     it = s.begin();      // Intializing iterator with string
//     for (it = s.begin(); it < s.end(); it++)
//     {
//         *it = *it - 32;
//     }
//     cout << s;
//     return 0;
// }
//
//
//
// 
// 
// 
// Iterator and for loop are same you can use which you think simple
#include<iostream>
using namespace std;
int main()
{
    string s = "today";
    for(int i = 0; s[i]!='\0'; i++)
    {
        cout<<s[i];
    }
    return 0;
}