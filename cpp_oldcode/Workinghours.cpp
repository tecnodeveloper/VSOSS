//Working hours Lesiures hours;
#include<iostream>
using namespace std;
int main()
{
	int hours;
	cout<<"Enter hour: "<<endl;
	cin>>hours;
	
	if(hours >= 9 && hours <= 18)
	{
		cout<<"Working Hours";
	}
	else
	cout<<"Lesuires Hours";
	return 0;
}

