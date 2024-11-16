//Making calculator with you can use addition, subtraction, multiplication and division.
#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	char op; 
    cout<<"Input two integer: ";
    cin>>n1>>n2;
    cout<<"Enter operator for calculation: ";
    cin>>op;
    
    switch (op)
    {
    	case '+':
    		cout<<"Addition is: "<<n1+n2<<endl;
    		break;
    	case '-':
    		cout<<"Subtraction is: "<<n1-n2<<endl;
    		break;
    	case '*':
    		cout<<"Multiplication is: "<<n1*n2<<endl;
    		break;
    	case '/':
    		cout<<"Division is: "<<n1/n2<<endl;
    		break;
    	case '%':
    		cout<<"Modulus is: "<<n1%n2<<endl;
    		break;
	}
  
}

