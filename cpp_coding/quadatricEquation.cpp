//Quadratic Equation
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,r1,r2,root;
	
	cout<<"Enter the value of a: ";
	cin>>a;
	cout<<"Enter the value of b: ";
	cin>>b;
	cout<<"Enter the value of c: ";
	cin>>c;
//	root = (pow(b,2)-4*a*c);
//	if(root == 0)
//	{
	r1 = (-b + sqrt(pow(b,2)-4*a*c)) / (2 * a);
	r2 = (-b - sqrt(pow(b,2)-4*a*c)) / (2 * a);
	cout<<"The root1 of quadratic equation is: "<<r1<<endl;
	cout<<"The root2 of quadratic equation is: "<<r2<<endl;
//	}
//	else
//	cout<<"Roots are not Quadratic equation";
	return 0;
}

