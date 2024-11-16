// // Strcat This function concatenates two strings.
// #include <iostream>
// #include <string.h>
// using namespace std;
// int main()
// {
//     char s1[20] = "Hello";
//     char s2[20] = " World";
//     cout << "String 1 before concatenation: " << s1 << endl;
//     cout << "String 2 before concatenation: " << s2 << endl;
//     // string result = str1 + str2;
//     strcat(s1, s2);
//     cout << endl;
//     cout << "String 1 After Concatenation " << s1 << endl;
//     cout << "String 2 After Concatenation " << s2 << endl;
//     return 0;
// }
//
//
//
//-------strncat-------
//
//
//same work as strcat but we can add length to it strncat(s1,s2,3);
#include<iostream>
#include <string.h>
using namespace std;
int main()
{
    char s1[20] = "Hello";
    char s2[20] = "World";
   cout<<"String 1 before concatenation: "<<s1<<endl;
   cout<<"String 2 before concatenation: "<<s2<<endl;
    //string result = str1 + str2;
    strncat(s1,s2,3);
    cout<<endl;
   cout<<"String 1 After Concatenation of length 3: "<<s1<<endl;
   cout<<"String 2 After Concatenation "<<s2<<endl;
    return 0;
}