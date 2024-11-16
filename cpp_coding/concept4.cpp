#include "iostream"
using namespace std;

//Global variable
int G = 22;
void run(int x = 34,double y = 45)              //default function which put arguments in the function parameter
{
    int G =2123;                            //In this situation i have declared outside the function variable and i output it inside the function then the result will be inside variable
    cout<<x<<endl;                          //If we want to use global variable inside the function than we have to use double scope resolution front of variable
    cout<<y<<endl;
    cout<<::G<<endl;                        //Now i have put double collon in straight of variable than we access the global variable.s
}
int main()
{
    run(32,23);
}