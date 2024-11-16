//Switch example
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<"Enter value of first operand: "<<endl;
    cin>>a;
    cout<<"Enter value of Second operand: "<<endl;
    cin>>b;
    cout<<"Enter operator(+,-,/,*,%): "<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
    cout<<"Addition is: "<<a+b<<endl;
        break;
    case '-':
    cout<<"Subtraction is: "<<a-b<<endl;
        break;
    case '*':
    cout<<"Multiplication is: "<<a*b<<endl;
        break;
    case '/':
    cout<<"Division is: "<<a/b<<endl;
        break;
    case '%':
    cout<<"Modulas is: "<<a%b<<endl;
        break;
    
    default:
    cout<<"Invalid operator";
        break;
    }
    return 0;
}