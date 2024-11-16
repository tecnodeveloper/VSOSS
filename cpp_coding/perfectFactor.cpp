//Perfect Factor
#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0;
	cout<<"Enter no: ";
	cin>>n;
	
	for(i=1; i <= n; i++)
	{
		if(n % i == 0)
		{
			cout<<"Factors are: "<<i<<endl;
			//Compound assignment operator
			sum+=i;
		}
	}
	cout<<sum<<endl;
	//Sum of factor is equal to double the number 1+2+3+6 are factors of 6 then (2*6) = 12
	if(sum == 2*n)
	{
		cout<<"Perfect Number";
	}
	else
	cout<<"Not a perfect Number";

	return 0;
}

