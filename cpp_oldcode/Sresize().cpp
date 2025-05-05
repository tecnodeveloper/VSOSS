// s.resize() is used to change the size of total capacity of string(Dev C++)
#include <iostream>
using namespace std;
int main()
{
    string s1 = "Hello";
    cout << "Before resize string capacity: " << s1.capacity()<<endl;
    s1.resize(50);
    cout << "After resize string capacity: " << s1.capacity()<<endl;
    return 0;
}