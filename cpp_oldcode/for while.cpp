//for loop(counter controlled loop ) for n times iteration 
#include<iostream>
using namespace std;
int main()
{
	int n{0};
	cout<<"Input n times iteration for loop: ";
	cin>>n;
   for(int i; i < n; i++)                   //for loop intialization, condition and updation is done inside brackets than for loop is counter controlled loop 
   {
   	cout<<"I love you\n";
   }
   return 0;
}

