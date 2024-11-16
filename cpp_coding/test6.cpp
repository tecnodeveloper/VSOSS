//Program for chk odd/even numbers Input two integer and also their sum 
#include<iostream>
using namespace std;
int main()
{
  int n1,n2;
  cout<<"Input two integer: ";
  cin>>n1>>n2;
  
  
	if(n1 % 2 == 0)
	cout<<n1<<" is Even Number"<<endl;
	else if(n1 % 2 == 1)
	cout<<n1<<" is Odd Number"<<endl;
	else if(n2 % 2 == 0)
	cout<<n2<<" is Even Number"<<endl;
	else if(n2 % 2 == 1)
	cout<<n2<<" is Odd Number"<<endl;
	else
	cout<<"Invalid Number";
	int sum = n1+n2;
	if(sum % 2 == 0)
	cout<<"Sum of these is Even Number "<<sum<<endl;
	else 
	cout<<"Sum of these is Odd Number "<<sum<<endl;
	return 0;
}

