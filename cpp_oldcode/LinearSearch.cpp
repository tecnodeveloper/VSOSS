//Linear Search
#include<iostream>
using namespace std;
int main()
{
	int n = 5 ,i, key, A[n];
	cout<<"Enter list of array for linear search: "<<endl;
	for(i = 0; i < n; i++)
	cin>>A[i];
	cout<<"Enter key: "<<endl;
	cin>>key;
	
	for (i=0;i<n;i++)
	{	
	if(key == A[i])
	{
	cout<<"Key is Successfull found at index "<<i<<endl;
	//Here is the logic
	//if we write here else then the for loop will continue to print else part also with if
	// return 0; will stop the for loop if the for loop execute here successfully then it did't move furthur to run program further
	return 0;
    }
	}
	//if part is not execute then it will come out of for loop and execute this statement;
	cout<<"Key is not found";
return 0;
}
