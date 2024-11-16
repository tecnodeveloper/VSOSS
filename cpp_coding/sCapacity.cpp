// s.capacity() is used to find total size of capacity of string taken by compiler
#include <iostream>
using namespace std;
int main()
{
    string s = "Hello";
    cout << "Total size of array taken by compiler to store sting Hello: " << s.capacity() << endl;
    //Bigger size string
    string s1 = "How are you! I hope you You are well & good ";
    cout << "Total size of array taken by compiler to store sting Hello: " << s1.capacity() << endl;

    return 0;
}