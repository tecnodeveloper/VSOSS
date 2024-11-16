//Pointers are variable used to store addresses of variable
#include<iostream>
using namespace std;
int main()
{
	int x = 10;
	int *p;            //declare pointer
	p = &x;            //Intialization of pointer p become pointer variable
	
	cout<<x<<endl;          //Data variable
	cout<<&x<<endl;          //Data variable
	cout<<p<<endl;          //p(variable give you address of variable x)
	cout<<*p<<endl;         //*p gives you value 
	cout<<&p<<endl;               //Address of p
}

