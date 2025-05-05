// s.clear() & s.erase will clear the string(Dev C++)
#include <iostream>
using namespace std;
int main()
{
    string s = "Hello";
    cout << "Before s.clear: " << s << endl;
    s.clear();
    cout << "After s.clear: " << s << endl;
    return 0;
}