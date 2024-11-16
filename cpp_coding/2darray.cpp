////2d array
//#include<iostream>
//using namespace std;
//int main()
//{
//	//First is row and second is column;
////	int A[2][3]={{1,2,3},{5,3,6}};
//	int A[2][3];
//	cout<<"Enter 2d array: ";
//		for(int i = 0; i<2; i++)
//	{
//		for(int j = 0; j<3; j++)
//		{
//			cin>>A[i][j];
//		}
//		cout<<endl;
//	}
//	for(int i = 0; i<2; i++)
//	{
//		for(int j = 0; j<3; j++)
//		{
//			cout<<A[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}






//2d array accessing using for each loop
#include<iostream>
using namespace std;
int main()
{
	int A[2][3];
//	int A[2][3]={{1,2,3},{5,3,6}};
//	auto means the data type which has same data type of variable appersent (&) reference is used in for each loop
	cout<<"Enter 2d array: ";
	for(auto& x:A)
	{
		for(auto& y:x)
		{
			cin>>y;
		}
		cout<<endl;
	}
		for(auto& x:A)
	{
		for(auto& y:x)
		{
			cout<<y<<" ";
		}
		cout<<endl;
	}
	return 0;
}

