// s.swap() is used to exchange the value of two string it take parameter whose value you want to exchange
#include <iostream>
using namespace std;
int main()
{
    string s = "World";
    string p = "Hello";
    // I want to swap the string built-in function is available which take string who want to swap as parameter
    s.swap(p);
    cout << "After Swaping: " << s <<" "<<p<<endl;
    return 0;
}