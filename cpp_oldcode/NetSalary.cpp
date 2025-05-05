//To calculate Net Salary
#include<iostream>
using namespace std;
int main()
{
    int Bsalary, Pallowances, Pdeduction,Nsalary;
    cout<<"Enter Basic Salary: "<<endl;
    cin>>Bsalary;
    cout<<"Enter Percentage of Allowances: "<<endl;
    cin>>Pallowances;
    cout<<"Enter Percentage of Deductions: "<<endl;
    cin>>Pdeduction;
    Nsalary = Bsalary+Bsalary*Pallowances/100-Bsalary*Pdeduction/100;
    cout<<"Net Salary: "<<Nsalary<<endl;
    return 0;
}