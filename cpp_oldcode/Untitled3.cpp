//Nested if-else statement (Simple concept) you can use if-else statement inside if-else statement
#include<iostream>
using namespace std;
int main()
{
	int marks{0};
	
	cout<<"Enter your marks: ";
	cin>>marks;
	
	if(marks < 33)
	{
		if(marks > 18 )
		{
			cout<<"gracefully passOut";
		}
		else
		{
			cout<<"fail";
		}
	}
	else
	{
		cout<<"Fail";
	}
}
