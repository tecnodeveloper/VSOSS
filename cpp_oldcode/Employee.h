#if !defined(Employee_H)
#define Employee_H
#include <string>
#include <iostream>
using std::cout;
using std::string;

class Employee
{
public:
    Employee(string s, string id, int sal) : name(s), employeeID(id)
    {
        if (sal >= 0)   salary = sal;
        else   salary = 0;
        cout << "\nPerson name: " << name;
        cout << "\nIntial salary: " << salary;
        cout << "\nEmployee id: " << employeeID;
    }
    void performanceRate(double performance)
    {
        if (performance >= 0.0 && performance <= 1.4)
        {
            salary *= performance;
        }
        else
        {
            cout << "\nInvalid performance Rate ";
        }
    }
    void display()
    {
        cout << "\n\nModified Salary";
        cout << "\nPerson name: " << name;
        cout << "\nEmployee id: " << employeeID;
        cout << "\nSalary: " << salary;
    }

private:
    string name;
    string employeeID;
    int salary{0};
};

#endif // Employee_H
