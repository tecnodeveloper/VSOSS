////for loop Example
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cout<<"Enter n: ";
//	cin>>n;
//	//for(intialize; condition; update)
//	for (int i = 1; i < n; i++)
//	{
//		cout<<i<<endl;
//	}
//	return 0;
//}

//Infinite loop
//(condition must become false after some time otherwise the loop became infinite loop)
#include<iostream>
using namespace std;
int main()
{
	int n = 1;
	for (int i = 1; i = n; i++)
	{
		cout<<i<<endl;
	}
	return 0;
}
