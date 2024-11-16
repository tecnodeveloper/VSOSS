//::(double scope resolution) is used to access the global variable if there is nearest local variable of same name
#include<iostream>
using namespace std;
int g = 5;     //global variable
int main()
//Inside all are local variable
{
cout<<g<<endl;
    {
        int g = 10;
        cout<<g<<endl;
        {
            g = 15;
            cout<<g<<endl;
        }
        //Now i want to access the g inside this scope or block of function i have to use ::(scope resolution)
        cout<<::g<<endl;
    }
    
    return 0;
}