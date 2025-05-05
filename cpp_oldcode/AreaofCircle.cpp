//Area of Circle 
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float r,area;
	cout<<"Enter radius: ";
	cin>>r;
	area = 3.14159265359f * pow(r,2);
	cout<<"Area of Circle: "<<area<<endl;
	return 0;
}