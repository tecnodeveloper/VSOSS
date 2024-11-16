// s.substr() will extract some part of string
#include <iostream>
using namespace std;
int main()
{
    string s = "Programming";
    // It take two parameter first is index from which start string || second from which length you want to output string
    cout << s.substr(3, s.length()) << endl;
    cout << s.substr(3, 4) << endl;
    return 0;
}
