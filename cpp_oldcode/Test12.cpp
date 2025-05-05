//if else-if you can print else if Multiple times between if and else there is no condition infront of else block
#include<iostream>
using namespace std;

int main()
{
	int age{0};
	
	cout<<"Enter the age: ";
	cin>>age;
	
	if(age <= 12)
	  cout<<"Child"<<endl;
	
	else if(age >= 12)
	 cout<<"Teenager"<<endl;

	else
	 cout<<"Adult"<<endl;
	return 0;
}
