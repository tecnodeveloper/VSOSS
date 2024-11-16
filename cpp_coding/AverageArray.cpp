//Calculate Average of array element
#include<iostream>
using namespace std;
int main()
{
	int n,sum{0};
	cout<<"Enter length of array: "<<endl;
	cin>>n;
	int A[n];
	cout<<"Enter array element: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	for(int i=0;i<n;i++)
	{
		sum = sum+A[i];
	}
	int aver = sum / n;
	cout<<"Average of Array Element: "<<aver;
return 0;
}

