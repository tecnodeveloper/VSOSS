//Sum of natural number
#include<iostream>
using namespace std;
int main()
{
	int n,i{1},sum{0};
	cout<<"Enter the natural number for sum: ";
	cin>>n;
	while(i <= n)
	{
		sum = sum + i;
		i++;
	}
cout<<"Natural number sum: "<<sum<<endl;

}

