//Sum of array element
#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	int A[5]={2,1,4,5,6};
	for(int i = 0; i < 5; i++)
	{
		sum += A[i];
	}
	cout<<"Sum of array: "<<sum<<endl;
	return 0;
}

