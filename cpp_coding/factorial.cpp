//Finding factorial using conter controlled for loop
#include<iostream>
using namespace std;
int main()
{
	int n,fact{1};     //If you don't declare or intialize the value of variable its value is default zero assign by compiler
	cout<<"Input n factorial number: ";   //Input value of n
	cin>>n;
	
	for(int i{1};i<=n;i++)           //For loop intialize counter controlled loop inside the brackets and condition is greater or equal to n 
	{
		fact *= i;                   //compound assignment operator which means you can write it as sum += i == sum = sum+i
	}
	cout<<"Factorial of "<<n<<" is "<<fact;    //We print the output ouside the loop because the final value will be printed after the value after the completion of loop 
	return 0;
}

