//Display digit in reverse  
#include<iostream>
using namespace std;
int main()
{
	int n,r;
	cout<<"Enter no for reverse: ";
	cin>>n;
	
while (n>0)
{
	//1724 % 10 = 4
	r = n % 10;
	//1724 / 10 = 172
    n = n / 10;
    cout<<r;
}
return 0;
}

