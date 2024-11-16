//program that inputs three integer and print sum,average,product,smallest and largest of those numbers
#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"Input three different integers: ";
	cin>>num1>>num2>>num3;
	
	cout<<"Sum is "<<num1+num2+num3<<endl;
	cout<<"Average is "<<(num1+num2+num3)/3<<endl;
	cout<<"Product is "<<num1*num2*num3<<endl;
	
	int smallest = num1;             //Declare variable smallest and equal to num1 
	if(num2 < smallest)
	{
		smallest = num2;
	}
		if(num3 < smallest)
	{
		smallest = num3;
	}
	cout<< "Smallest is " <<smallest<<endl;
	
	int largest = num1;
	if(num2 > largest)
	{
		largest = num2;
	}
	if(num3 > largest)
	{
		largest = num3;
	}
	cout<<"Largest is "<< largest<<endl;
	return 0;
}
