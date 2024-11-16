//Sum of natural number
#include<iostream>
using namespace std;
int main()
{
	int n,sum;
	cout<<"Enter n for sum: ";
	cin>>n;
	
	for(int i = 1; i <= n; i++)
	{
		//sum = sum + i;
		sum += i;
	}
	cout<<"Sum of natural no: "<<sum;
	return 0;
}

