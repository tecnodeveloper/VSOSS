//program for checking division by zero or not 
#include<iostream>
using namespace std;
int main()
{
	int div,a,b;
	cout<<"Input Two integer: ";
	cin>>a>>b;
	
	if(b == 0)                   //Double equal is used as equal to and single = is for assignment operator.
	cout<<"Division by Zero is Invalid";
	else
	{
		div = a/b;
		cout<<"Division is: "<<div<<endl;
	}
	return 0;
}
