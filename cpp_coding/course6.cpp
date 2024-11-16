//program for displaying grades of subject
#include<iostream>
using namespace std;
int main()
{
	int m1,m2,m3;
	cout<<"Input three marks: ";
	cin>>m1>>m2>>m3;
	int average = (m1+m2+m3)/3.0;
	
	if(average >= 60 )
    cout<<"A Grade";
    else if(average <= 60 && average >= 33)
    cout<<"B Grade";
    else
    cout<<"Fail";
    return 0;
}
