// Amstrong number Example
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,r,sum=0;
	cout<<"Enter no to check Amstrong: ";
	cin>>n;
	int t = n;
	while(n>0)
	{
		r = n % 10;
		n = n / 10;
	    sum+=r*r*r;
	}
	if(t==sum)
	cout<<sum<<" Amstrong Number";
	else
	cout<<"Not amstrong Number";
}
