//program that describe short cicuit
#include<iostream>
using namespace std;
int main()
{
	int a{10},b{5},i{5};
	if(a > b || ++i<=b)          //Donot use Increment / Decrement Operator after the logical operator is written because compiler will take as short circuit 
    {
	}                                //Here the first Condition is true then the OR does'nt check second condition(may be its true it does'nt check) here in this case.
	cout<<i<<endl;               //Short circuit is happened in OR ||
	return 0;
}
