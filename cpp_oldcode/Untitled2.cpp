// Program that asks user to enter two numbers then print the sum product,subtraction, difference and quotient of two numbers.
#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter two integer: ";
	cin >> num1>>num2;
	cout<< "The addition is: "<<num1 + num2;
	cout<< "The Subtraction is: "<<num1 - num2;
	cout<< "The Multiplication is: "<<num1 * num2;
	cout<< "The Division is: "<<num1 / num2;
	cout<< "The Modulas is: "<<num1 % num2;
	return 0;
}
