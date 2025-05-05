//program for checking Eligibilty for offer using compound condition statement.
#include<iostream>
using namespace std;
int main()
{
	int age{0};
	cout<<"Input age: ";
	cin>>age;
	
	if(age >= 12 && age <= 50)
	cout<<"Young"<<endl;
	else 
	cout<<"Not Young"<<endl;
	if(age <= 12 || age >= 50)                        // Old OR children are eligibal only
	cout<<"You will eligibal for this offer"<<endl;
	else
	cout<<"You are not eligibal for this offer"<<endl;
}
