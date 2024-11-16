// //Finding username from email address
// #include<iostream>
// using namespace std;
// int main()
// {
//     string s = "recluzedev1212@gmail.com";
//     int index = s.find('@');
//     cout<<s.substr(0,index);
//     return 0;
// }
//
//
//
//
//
// checking username is correct -character -numeric - '-', '.'
#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter Uname for email address: ";
    cin >> s;
    bool isvalid = true;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (!(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9' || s[i] == '-' || s[i] == '.'))
        {
            isvalid = false;
            break;
        }
    }
    if (isvalid)
    {
        cout << s << "@gmail.com";
    }
    else
        cout << "Not valide Uname";

    return 0;
}