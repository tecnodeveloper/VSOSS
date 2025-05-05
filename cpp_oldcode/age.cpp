//age example
#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter age: "<<endl;
	cin>>age;
	
	if(age >= 1 && age <= 12)
	{
	cout<<age<<" age is CHILD"<<endl;
	}
	else if(age >=12 && age <= 40)
	cout<<age<<" age is YOUNG"<<endl;
	else 
	cout<<age<<" age is OLD"<<endl;
	
	//Offer for child and old
	if(age < 12|| age > 40)
	{
		cout<<"Eligible for Offer"<<endl;
	}
	else
	cout<<"Not Eligible"<<endl;
	return 0;
}

