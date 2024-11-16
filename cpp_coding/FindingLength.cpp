// Finding length of string
//  Using built-in function called s.length()
//  Using for loop counter to count the length of string
//  Using iterator same as for loop
//
//
//
//  // Using s.length
//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//      string s = "Pakistan";
//      cout<<s.length();
//      return 0;
//  }
//
//
//
// //  Using for loop
// #include <iostream>
// using namespace std;
// int main()
// {
//     string s = "Pakistan";
//     // Using variable count to store the length and update it
//     int count = 0;
//     for (int i = 0; s[i] != '\0'; i++)
//     {
//         count++;
//     }
//     cout << count;

//     return 0;
// }
//
//
//
//  Using iterator
#include <iostream>
using namespace std;
int main()
{
    string s = "Pakistan";
    // Using variable count to store the length and update it
    int count = 0;
    // declaring iterator of object name it
    string::iterator it;
    // using for loop to access all the element of string
    for (it = s.begin(); it != s.end(); it++)
    {
        count++;
    }
    cout << count;

    return 0;
}