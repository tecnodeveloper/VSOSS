// Reading and writing String
#include <iostream>
using namespace std;
int main()
{
    char s[20];
    cout << "Enter your name: ";
    // cin>>s;     //Yeah it will take only Zain not Ali because after space the \0 will end the string and cin just take one string
    //cin.get(s, 20);     //cin.get will be used for character type array not for string type data type
    cin.getline(s,20);
    cout << "Welcome MR " << s;
    return 0;
}