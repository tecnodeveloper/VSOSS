//Greater between three no
#include<iostream> 
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter three No"<<endl;
	cin>>a>>b>>c;
	
	if (a > b && a > c)
	cout<<a<<" A is greater"<<endl;
	//a is now cut off bcz a is not greater
	else if(b > c)
	cout<<b<<" B is greater"<<endl;
	// a and b is cut off and c is greater
	else 
	cout<<c<<" C is greater"<<endl;
	return 0;
}

