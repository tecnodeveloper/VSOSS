//finding speed using function 
#include <iostream>
#include <cmath>
using namespace std; 
int Speed()
{
	int u, v, a;
	int speed;
	cout<<"Enter the 3 no :\n";                   // taking 3 values as output from user. 
	cin>>u >> v >> a;                            //multiple values as input in one statement 
	speed = (pow(u,2) - pow(v,2)) / (2*a);        //using pow fun to take power of variable
	cout << "Your Output : " << speed ;
}
int main()
{
	Speed();
}
