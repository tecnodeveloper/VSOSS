// // s.copy(char x[]) is used to copy a string into character
// #include <iostream>
// using namespace std;
// int main()
// {
//     string s = "Hello";
//     char x[10];
//     x[3] = {'\0'}; // Here backslash zero is used to end the string we write here is bcz the length we given to copy is 3 so after index 3 string delimeter will be printed and no garbage value will be printed
//     s.copy(x, 3);
//     // s.copy(x,s.length());          //if we want to copy entire string in character array then we have to give all the index by using s.legth(which give length of given string)
//     cout << x;
//     return 0;
// }


// Assignment "=" means assigning or copy content of left string to right string
#include <iostream>
using namespace std;
int main()
{
    string s = " ";
    string p = "Hello";
    s = p;
    cout << s << " " << p;
    return 0;
}
