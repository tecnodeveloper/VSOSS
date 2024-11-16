//Program for Table using for loop 
#include<iostream>
using namespace std;
int main()
{
	int result{0},table{0};
   cout<<"Input the table Number: ";
   cin>>table;
   for(int i{1};i <= 10;i++)
   {
   	result = i * table;
   	cout<<table<<" X "<<i<<" = "<<result<<endl;
   }
   return 0;
}

