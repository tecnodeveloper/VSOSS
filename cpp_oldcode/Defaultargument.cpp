// Assignment some default value to argument at declaration time called default argument
// Compiler will assign explcitly default argument if you not pass the value
// Argument will taken from right to left
#include <iostream>
/* using namespace std;
int max(int a=0,int b=0,int c=0)
{
    if(a>b && a>c)
    return a;
    else if(b>c)
    return b;
    else
    return c;
}
int main()
{
    cout<<max()<<endl;
    cout<<max(5)<<endl;
    cout<<max(5,10)<<endl;
    cout<<max(5,10,15)<<endl;
    return 0;
} */

#include<iostream>
using namespace std;
    class Coonstructor
    {
        public:
        Coonstructor()
        {
            cout<<"Defualt constructor is called implicitly"<<endl;
        }
    };
int main()
{
   Coonstructor c1,c2,c3,c4,c5;
    return 0;
}