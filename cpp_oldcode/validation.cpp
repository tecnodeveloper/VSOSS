//Check if Denominator is not zero
#include<iostream>
using namespace std;
int main()
{
	int d,n,c;
	cout<<"Enter denominator value: "<<endl;
	cin>>d;
	cout<<"Enter Nominator value: "<<endl;
	cin>>n;
	
	if (d == 0)
	{
		cout<<d<<" is not divisible by "<<n<<endl;
	}
	else
	{
	c = d/n;
	cout<<"Yes its Divisible : "<<c<<endl;
	}
	return 0;
}

