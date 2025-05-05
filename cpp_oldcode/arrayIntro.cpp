//ArrayConcept
//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[4]={0,1,2,3};
//	
//	for(int i = 0; i < 4; i++)
//	{
//		cout<<"Whole Array printing using for loop: "<<arr[i]<<endl;
//	}
//	return 0;
//}




////for each loop
//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[4]={0,1,2,3};
//	
//	for(int x:arr)
//	{
//		cout<<x<<endl;
//	}
//	return 0;
//}








//if array has empty [] size array then the compiler automatically create the size according to values
//if you create the array of 7 size and give value 4 then you then the rest values will be garbage values
#include<iostream>
using namespace std;
int main()
{
	int arr[7]={0,1,2,3};
	char ch[]={'A','B','C','D'};
	
	for(int i = 0; i < 7; i++)
	{
		cout<<"Whole Array printing using for loop: "<<arr[i]<<endl;
	}
	for(int x : ch)
	{
		cout<<x<<endl;
	}
	return 0;
}


