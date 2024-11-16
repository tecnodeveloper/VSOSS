//Rollno is valid or not
#include<iostream>
using namespace std;
int main()
{
	int rollno;
	cout<<"Enter Rollno: "<<endl;
	cin>>rollno;
	
	if ( rollno > 0)
	cout<<" Rollno is valid "<<endl;
	else
	cout<<" Rollno is not valid ";
	return 0;
}

