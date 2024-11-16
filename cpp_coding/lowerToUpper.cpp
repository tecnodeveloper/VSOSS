// Convert lower to Upper case
#include <iostream>
using namespace std;
int main()
{
    string s ;
    //Input string
    cout<<"Enter string to convert lower to upper case: "<<endl; //Prompt user to enter string
    getline(cin,s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            // s[i] = s[i] - 32;
            s[i] -= 32;
        }
        cout << s[i];
    }

    return 0;
}