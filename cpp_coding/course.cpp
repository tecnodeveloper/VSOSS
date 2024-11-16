//Program to demonstrate the validation of roll no
#include<iostream>
using namespace std;
int main()
{
	int roll;
	cout<<"Enter Roll no: ";
	cin>>roll;
	
	if(roll > 0)
	cout<<"Valid Roll no.";
	else
	cout<<"Invalid Roll no";
	return 0;
}
