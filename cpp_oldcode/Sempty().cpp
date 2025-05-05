// s.empty() will check if the string is empty or not using ifelse(Dev C++)
#include <iostream>
using namespace std;
int main()
{
    string s = "";
    if (s.empty())
        cout << "Its empty string: " << endl;
    else
        cout << "String is: " <<s<< endl;
    return 0;
}