//Using for loop natural number find n number
#include<iostream>
using namespace std;
int main()
{
	int n,sum{0};
	cout<<"Enter the n natural number: ";
	cin>>n;
	
	for(int i{1};i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<"Sum of natural number: "<<sum;
	return 0;
}

