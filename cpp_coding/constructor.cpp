//! three constructor defualt Parameterized Copy constructor 
/* #include<iostream>
using namespace std;
class constructor
{
    public:
    //?You cannot create 2 same type of argument same type of name constructor just like function overloading
    constructor() 
    {
        cout<<"Constructor is automatically called";
    }
    constructor()
    {
        cout<<"Constructor 2 is called";
    }
};
int main()
{
    constructor o1;
    constructor o2;
    constructor o3;
    constructor o4;
    constructor o5;

    return 0;
} */

#include<iostream>
using namespace std;
class constructor
{
    public:
    constructor()  //defualt constructor
    {
        cout<<"Constructor is automatically called"<<endl;
    }
    constructor(int a)  //parameterized constructor which takes one argument
    {
        cout<<"Constructor with one argument is called"<<endl;
    }
    constructor(int a, int b)  //parameterized constructor which takes two argument
    {
        cout<<"Constructor with 2 argument is called"<<endl;
    }    
    constructor(int a, int b, int c)  //parameterized constructor which take three argument
    {
        cout<<"Constructor with 3 argument is called"<<endl;
    }
};
int main()
{
    constructor o1;
    constructor o2;
    constructor o3;
    constructor o4;
    constructor o5(5);
    constructor o6(2,2,7);
    constructor o7(2,2);
    constructor o8(2,2);
    constructor o9(2);
    return 0;
}