/* //grade example switch case
#include<iostream>
using namespace std;
int main()
{
    char grade;
    cout<<"Enter your grades: ";
    cin>>grade;
    switch (grade)             //expression or variable its take in switch then if value of switch matches with case then statement of case is executed  Float values are acceptable only integer can be taken as condition
    {
    case 'A':
    {
    cout<<"Excellent";
    break;       //If you don't write break then all statement below also executed
    }
    case 'B':
    {
    cout<<"Very Good";
    break;
    }
    case 'C':
    {
    cout<<"Poor";
    break;
    }
    case 'D':
    {
    cout<<"Fail";
    break;
    }
    default:
    {
    cout<<"Please enter grade between A to D: ";
    break;
    }
    } 
    return 0;
} */

//program for salary deduction using switch case
#include<iostream>
using namespace std;
int main()
{
    int salary,deduction;
    cout<<"Enter your salary: ";
    cin>>salary;
    switch (salary/10000)
    {
    case 0:
        cout<<"After deduction of salary: "<<salary; //10000 or less than it no deduction 
        break;
    case 1:
        cout<<"After deduction of salary: "<<salary-1000;    //10000 to 20000 then deduct 1000
        break;
    default:
        deduction = (salary*7)/100;
        cout<<"After deduction of salary: "<<salary-deduction;        //20000 or more then it will deduct 7%
        break;
    }
    return 0;
}   