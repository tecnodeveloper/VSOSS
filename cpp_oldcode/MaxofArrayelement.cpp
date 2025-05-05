//Max of array element
#include<iostream>
using namespace std;
int main()
{
	int A[7]={2,4,5,6,5,7,3};
	//Why we can't use INT_MAX bcz if we write then if condition is always false MAX contain maximum integer value
	int max=INT_MIN;
	for(int i = 0; i < 7; i++)
	{
		if(A[i]>max)
		{
			max=A[i];
		}
	}
	cout<<"Max in array element: "<<max<<endl;
	return 0;
}

