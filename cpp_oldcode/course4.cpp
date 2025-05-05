//Program finding maximum number using relational conditional statement.
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Input three integer: ";
	cin>>a>>b>>c;
	
	if( a > b && a > c )
	cout<<a<<" is greater";
	else
	   if(b > c && b > a)
	   cout<<b<<" is greater";
	   if(c > a && c > b)
	   cout<<c<<" is greater";
}
