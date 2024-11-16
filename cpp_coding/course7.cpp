//program Display Day using else if ladder
#include<iostream>
using namespace std;
int main()
{
	int day;
	cout<<"Input a day: ";
	cin>>day;
	
	if(day == 1 )
	cout<<"Monday";     //you can use else if() multiple inside if else or you can use if else inside a if else this called nested if else
	else if(day == 2)
	cout<<"Tuesday";
	else if(day == 3)    //The else if() block in it the else is the first if block else than new block start from if() condition start
	cout<<"Wensday";
	else if(day == 4)
	cout<<"Thursday";
	else if(day == 5)
	cout<<"Friday";
	else if(day == 6)
	cout<<"Saturday";
	else if(day == 7)
	cout<<"Sunday";
	else 
	cout<<"Invalid day";
	
}

