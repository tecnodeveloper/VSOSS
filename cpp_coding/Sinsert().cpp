// s.insert(3,"kk") is used to insert string at given index
#include <iostream>
using namespace std;
int main()
{
    string s1 = "Hello";
    s1.insert(5, " World");
    
	// s.insert(5," World")   
    string s2 = "Welcome";
    s2.insert(7, " Zain",2);

    cout << "After inserting string: " << s1 << endl;
    cout << "After inserting string: " << s2 << endl;
    return 0;
}