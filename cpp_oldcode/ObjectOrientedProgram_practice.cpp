//! Object-Oriented programming C++ Program from w3resource
//! For colouring comments used extension "Better Comments"
//!  exclamentry sign(!) is used for what program do
//? question mark(?) show real comments written in program

/* //! Program that implement class Circle private member varible radius Include member functions to calculate circle area and circumference
#include<iostream>
#include"Circle.h"
using namespace std;
int main()
{
    Circle myobject;
    double radius;
    cout<<"Enter radius to find area & circumference: ";
    cin>>radius;
    myobject.area(radius);
    cout<<"Area of circle: "<<myobject.area(radius)<<endl;
    cout<<"Circumference of circle: "<<myobject.circumference()<<endl;
    return 0;
}  */

/* //! class Rectangle private member length and width rectangle area & perimeter
#include<iostream>
#include"Rectangle.h"
using namespace std;
int main()
{
    float l{0}, w{0};
    Rectangle rectangleObject;
    cout<<"Enter length & width: ";
    cin>>l>>w;
    rectangleObject.setArea(l,w);
    rectangleObject.setPerimeter();
    cout<<"Area is: "<<rectangleObject.setArea(l,w)<<endl;
    cout<<"Perimeter is: "<<rectangleObject.setPerimeter()<<endl;
    return 0;
} */

/* //! create class Person private member name,age,country implement member function set and get the values of variable

#include<iostream>
#include"Person.h"
#include<string>
using namespace std;
int main()
{
    Person p1;
    cout<<"Input your Name: ";
    string n,c;
    getline(cin,n);
    cout<<"Input your Country: ";
    getline(cin,c);
    p1.setName(n,c);
    cout<<"Input your age: ";
    int a;
    cin>>a;
    p1.getAge(a);
    p1.display(p1);
    return 0;
} */

/* //! create class Car that has private member company,model and year Implement get and set these variable

#include<iostream>
#include"Car.h"
#include<string>
using namespace std;
int main()
{
    Car car1;
    cout<<"Enter you car company: ";
    string m,c;
    getline(cin,c);
    cout<<"Enter your car model: ";
    getline(cin,m);
    car1.setCar(c,m);
    cout<<"Enter the year you have buy it: ";
    int y;
    cin>>y;
    car1.getYear(y);
    car1.display(car1);
    return 0;
} */

/* //! class BankAccount private member account number and balance Member functions are deposit and withdraw money

#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;
int main()
{
    int b{0};
    BankAccount a1("Mukesh", 600);
    BankAccount a2("Tata", 800);
    BankAccount a3("Adani", 1000);
    cout << "Please select account \t 1 for account one \t 2 for account two \t 3 for account three "<<endl;
    cin >> b;
    if (b == 1)
    {
        cout << "\n1 for deposit money, \t 2 for withdraw money" << endl;
        cin >> b;
        if (b == 1)
        {
            a1.deposit();
        }
        else if (b == 2)
        {
            a1.withdraw();
        }
        else
        {
            cout << "please select correct digit" << endl;
        }
        a1.display();
    }
    else if (b == 2)
    {
        cout << "\n1 for deposit money, \t 2 for withdraw money" << endl;
        cin >> b;
        if (b == 1)
        {
            a2.deposit();
        }
        else if (b == 2)
        {
            a2.withdraw();
        }
        else
        {
            cout << "please select correct digit" << endl;
        }
        a2.display();
    }
    else if (b == 3)
        {
            cout << "\n1 for deposit money, \t 2 for withdraw money" << endl;
            cin >> b;
            if (b == 1)
            {
                a3.deposit();
            }
            else if (b == 2)
            {
                a3.withdraw();
            }
            else
            {
                cout << "please select correct digit" << endl;
            }
            a3.display();
        }
        return 0;
} */

/* //! class Triangle private data member length and member function equilateral,isosceles or scalene

#include<iostream>
#include "Triangle.h"
using namespace std;
int main()
{
    cout<<"Input three sides of triangle: ";
    int side1{0},side2{0},side3{0};
    cin>>side1>>side2>>side3;
    Triangle object(side1,side2,side3);
    object.determineShape();
    return 0;
} */

/* //! class Employee private name,employeeID,salary member function calculate and set salary based on emplyee performance

#include<iostream>
#include <string>
#include "Employee.h"
using namespace std;
int main()
{
    string name,eID;
    int salary{0};
    double pRate{0};
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"Enter your employee id: ";
    cin>>eID;
    cout<<"Enter your salary: ";
    cin>>salary;
    Employee object(name,eID,salary);
    cout<<"\n\nEnter your Performace rating(0.0 - 1.4): ";
    cin>>pRate;
    object.performanceRate(pRate);
    object.display();
    return 0;
} */

/* //! class Date private day,month,year member function set and get these variable as validate if the date is valid

#include<iostream>
using namespace std;
class Date
{
    public:
    void getDate(int d)
    {
        if(d >= 1 && d <= 31) day = d;
        else day = 0;
    }
    void getMonth(int m)
    {
        if(m >= 1 && m <= 12) month = m;
        else month = 0;
    }
    void getYear(int y)
    {
        if(y > 1900 && y <= 2024) year = y;
        else year = 0;
    }
    int setDate()
    {
        return day;
    }
    int setMonth()
    {
        return month;
    }
    int setYear()
    {
        return year;
    }
    private:
    int day{0},month{0},year{0};
};
int main()
{
    int d{0},m{0},y{0};
    cout<<"\nEnter day: ";
    cin>>d;
    cout<<"\nEnter month: ";
    cin>>m;
    cout<<"\nEnter year: ";
    cin>>y;
    Date object;
    object.getDate(d);
    object.getMonth(m);
    object.getYear(y);
    cout<<"\n\nDate: "<<object.setDate()<<"/"<<object.setMonth()<<"/"<<object.setYear();
    return 0;
} */

/* //! class Student private name,class,rollNo,marks member function calculate grade based on marks and display student information

#include <iostream>
#include <string>
#include "Student.h"
using namespace std;
int main()
{
    string Sn;
    int Class{0}, rNo{0};
    double marks{0},percent{0};
    cout << "\nEnter your name: ";
    getline(cin, Sn);
    cout << "\nEnter your class: ";
    cin >> Class;
    cout << "\nEnter your RollNo: ";
    cin >> rNo;
    cout << "\nEnter your Marks: ";
    cin >> marks;
    Student object(Sn,Class,rNo,marks);
    percent = object.setMarks() / 505 * 100;
    object.getClass(Class);
    object.getMarks(marks);
    object.getRollno(rNo);
    cout<<"\n\nModified Marks";
    cout << "\nStudent name: " << Sn;
    cout << "\nStudent class: " << object.setClass();
    cout << "\nStudent rollno: " << object.setRollno();
    cout << "\nStudent marks: " << object.setMarks();
    cout << "\nStudent Percentage: " <<percent;
    cout << "\nStudent Grades: ";
    object.setGrade(percent);
    return 0;
} */

//! Class called Shape with virtual member functions for calculating area and perimeter. Derive classes such as Circle, Rectangle, and Triangle from the Shape class and override virtual functions accordingly.

#include <iostream>
#include "Shape.h"
using namespace std;
int main()
{

    return 0;
}

//! TODO // TODO // TODO
//? Question 10 of Object oriented programming