// Local variable are accessble inside code of block (memory for local variable are created inside the stack)
// Gloabal variable are accessble anywhere in program (memory for global variable are created inside code section)
#include <iostream>
using namespace std;
int g = 20;
int fun()
{
    g = 12;
    return g;
}
int fun2()
{
    // a = 32; you cannot access a here bcz its local variable of other function.
}
int main()
{
    cout << g << endl;   
    fun();    //After calling function the value of global variable is change
    cout << g << endl;
    return 0;
}