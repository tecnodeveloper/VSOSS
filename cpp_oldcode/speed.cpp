//Speed
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float u,v,speed,a;
	cout<<"Enter value of u, v and a: ";
	cin>>u>>v>>a;
	speed = (pow(u,2) + pow(v,2)) / (2*a);
	cout<<"Speed is: "<<speed;
	return 0;
}

