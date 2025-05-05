//program to calculate the Net Salary 
#include <iostream>
using namespace std;
typedef float BasicSalary;                       //I created my own data-type so I used them at global scope 
typedef float percentageofAllowance;
typedef float percentageofDeduction;
int main()
{
	BasicSalary b ;
	percentageofAllowance a ;
	percentageofDeduction d ;
	
	cout << "Enter the amount of basic salary : ";
	cin >> b ;
	cout << "Enter the percentage of Allowance : ";
	cin >> a ;
	cout << "Enter the percentage of Deduction : ";
	cin >> d ;
	float NetSalary = b + b * a/100 - b * d/100;
	cout << "Your Net-Salary :" << NetSalary ;
	
}
