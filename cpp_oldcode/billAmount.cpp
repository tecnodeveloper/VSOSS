//Discount program
#include<iostream>
using namespace std;
int main()
{
	float a,d;
	cout<<"Enter Total Amount: ";
	cin>>a;
	
	if(a < 100)
	cout<<"No discount"<<endl;
	else if(a >= 100 && a < 500)
	{
	d = (a * 10 )/ 100;
	float s = a-d;
	cout<<"After 10% discount: "<<s<<endl;
	}
	else if(a >= 500 )
	{
	d = (a*20)/100;
	float s = a-d;
	cout<<"After 20% discount: "<<s<<endl;
	}
	else
	cout<<"Invalid Amount";
	return 0;
}

