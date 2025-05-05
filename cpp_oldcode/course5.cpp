//program to find the roots of Nature of Quardatic Roots
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,d,r1,r2;
	cout<<"Input root values a b c: ";
	cin>>a>>b>>c;
	d = pow(b,2)-(4*a*c);
	
	if(d == 0)
	{
	cout<<"Roots are real and equal "<<endl;
	cout<<(-b/(2*a))<<endl;
    }
	else if(d > 0)
	{
	cout<<"Roots are real and not equal"<<endl;
	cout<<(-b+sqrt(d)/(2*a))<<endl;
	cout<<(-b-sqrt(d)/(2*a))<<endl;
	}
	else
	{
	cout<<"Roots are Imaginary";
    }
	return 0;
}
