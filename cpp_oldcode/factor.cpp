//Factors of number using for loop 
#include<iostream>
using namespace std;
int main()
{
	int n,sum{0};
	cout<<"Input factor number: ";
	cin>>n;
	
	for(int i{1};i<=n;i++)
	{
		if(n % i == 0)
		{
			cout<<i<<" ";
            sum += i;
		}
	}
	cout<<"Factors of "<<n<<"and the sum is: "<<sum;
	return 0;
}

