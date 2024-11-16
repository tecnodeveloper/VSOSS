//Write program to calculate Net Salary program should take Basic Salary 2 Percentage of Allowances 3- Percentage of Deductions.
#include<iostream>
using namespace std;
int main()
{
	float BasicS{0},Allowance{0},Deduction{0};                           //NetSalary = Base Salary + Basic Salary * percentage of Allowance - Basic salary* percentage of Deductions
	
	cout<<"Enter your Salary: ";
	cin>>BasicS;
	cout<<"Enter your Percentage of Allowances: ";
	cin>>Allowance;
	cout<<"Enter your Percentage of Deductions: ";
	cin>>Deduction;
	int NetSalary = BasicS+BasicS*Allowance/100 - BasicS*Deduction/100;
	
	cout<<"Your Net Salary is: "<<NetSalary;
	return 0;
}
