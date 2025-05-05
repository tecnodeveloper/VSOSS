//Prime number
#include<iostream>
using namespace std;
int main()
{
	int n,i,count=0;
	cout<<"Enter no: ";
	cin>>n;
	
	for(i=1; i <= n; i++)
	{
		if(n % i == 0)
		{
			cout<<"Factors are: "<<i<<endl;
		    count++;	    
		}
	}
	//Prime number are divisible by 1 and its only himself(means two factor only of prime no 1 and 5 = 5) 
	if(count == 2)
	{
		cout<<"Prime Number: "<<n;
	}
	else
	cout<<"Not a Prime Number";

	return 0;
}

