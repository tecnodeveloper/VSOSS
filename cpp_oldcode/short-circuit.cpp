//short circuit example
#include<iostream>
using namespace std;
int main()
{
    int a=12,b=9,c=10;
    //Compiler check first condition (True) than he goes to second condition (True) 
    if(a > c && ++b<= c)
    {
        cout<<b<<endl;
    }
    //Here compiler check first condition if its true then he does't check second condition and execute statement called short circuit;
    if(a > c || ++b<= c)
    {
        cout<<b<<endl;
    }
    return 0;
}
