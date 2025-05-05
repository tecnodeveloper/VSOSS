//program that inputs two integer then print larger number and print if number are equal
#include<iostream>
using namespace std;
int main() 
{
	int num1,num2,num3;
	cout<<"Enter three integer value: ";
	cin>>num1>>num2;
	if(num1>num2)
	{
		cout<<num1<<" is larger"<<endl;
	}
	else if(num2>num1)
	{
		cout<<num2<<" is larger"<<endl;
	}
	else
	{
		cout<<"These numbers are equal";
	}
return 0;
}

