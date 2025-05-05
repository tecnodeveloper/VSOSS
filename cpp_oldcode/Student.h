#if !defined(Student_H)
#define Student_H
#include <iostream>
#include <string>
using std::cout;
using std::string;
class Student
{
public:
    Student(string n,int c,int r,int m) : name(n),Class(c),rollNo(r),marks(m)
    {
        cout<<"\nStudent Details";
        cout<<"\nName: "<<name;
        cout<<"\nClass: "<<Class;
        cout<<"\nRoll no: "<<rollNo;
        cout<<"\nMarks: "<<marks;
    }
    void getClass(int c)
    {
        if (c >= 1 && c <= 12)
            Class = c;
        else
            Class = 0;
    }
    void getRollno(int r)
    {
        if (r >= 1)
            rollNo = r;
        else
            rollNo = 0;
    }
    void getMarks(double ma)
    {
        if (ma >= 1)
            marks = ma;
        else
            { marks = 0; }
    }
    int setClass()
    {
        return Class;
    }
    int setRollno()
    {
        return rollNo;
    }
    double setMarks()
    {
        return marks;
    }

    void setGrade(double percent)
    {
        if (percent >= 90)
        {
            cout << " A+";
        }
        else if (percent >= 80 && percent <= 89)
        {
            cout << " A";
        }
        else if (percent >= 70 && percent <= 79)
        {
            cout << " B";
        }
        else if (percent >= 60 && percent <= 69)
        {
            cout << " C";
        }
        else if (percent >= 50 && percent <= 59)
        {
            cout << " D";
        }
        else if (percent >= 40 && percent <= 49)
        {
            cout << " E";
        }
        else if (percent >= 0 && percent <= 39)
        {
            cout << " F";
        }
        else
        {
            cout << "Invalide grade";
        }
    } 

private:
    string name;
    int Class{0}, rollNo{0};
    double marks{0};
};

#endif // Student_H
