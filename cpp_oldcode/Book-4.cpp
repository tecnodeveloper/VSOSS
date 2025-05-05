//! Program of chapter 4 Algorithm Development and Control statement 1

/* #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Input number: ";
    cin>>n;
    if(n >= 60)
    cout<<"Passed";
    else
    cout<<"Failed";
    return 0;
} */

//! Nested if else structure inside else block
/* #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Input number: ";
    cin>>n;
    if(n >= 90)
    cout<<"A";
    else
    {
        if(n >= 80)
        cout<<"B";
        else
        {
            if(n >= 70)
            cout<<"C";
            else
            cout<<"F";
        }
    }
    return 0;
} */

/* //! else if() ladder is best for tackling more conditions than nested if else
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Input number: ";
    cin>>n;
    if(n >= 90)
    cout<<"A";
    else if(n >= 80)
    {
        cout<<"B";
    }
    else if (n >= 70)
    {
        cout<<"C";
    }
    else
    cout<<"F";
    return 0;
} */

/* //! Dangling else problem
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Input number: ";
    cin>>n;
    if(n >= 60)
    {
        cout<<"Passed";
    }
    else
        cout<<"Failed";
        cout<<"You must do it again";  //? This statement executes in both condition of >= 60 or <= 60 bcz the else block is not in parenthes{}
   return 0;
} */

/* //! ternary operator
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Input number: ";
    cin>>n;
    cout<<(n >= 60) ? "Passed" : "Failed";
   return 0;
} */

/* //!Student class that give output grade
#include<iostream>
#include<string>
using namespace std;
class student
{
    public:
    student(string n,int a) :name(n),average(a)
    {
        cout<<"\n\nIntial value";
        cout<<"\nStudent Name: "<<name;
        cout<<"\nStudent average: "<<average;
    }
    void getName(string n)
    {
        if(n.length() <= 20)
        {
            name = n;
        }
        else
            cout<<"String is exceeded";
    }
    void getAverage(int a)
    {
        if(a > 0 && a <= 100)
        {
            average = a;
        }
        else
        average = 0;
    }
    string setName()
    {
        return name;
    }
    int setAverage()
    {
        return average;
    }
    string getLetterGrade()
    {
        if (average >= 90)
        {
            return "A";
        }
        else if (average >= 80)
        {
            return "B";
        }
        else if (average >= 70)
        {
            return "C";
        }
        else if (average >= 60)
        {
            return "D";
        }
        else
        {
            return "F";
        }
    }
    private:
    string name;
    int average;
};
int main()
{
    student Sobject1("Zain ali",73);
    student Sobject2("Omman noor",92);
    cout<<"\n\n"<< Sobject1.setName() <<" letter grade equivalent of "<<Sobject1.setAverage() <<" is: "<<Sobject1.getLetterGrade();
    cout<<"\n"<< Sobject2.setName() <<" letter grade equivalent of "<<Sobject2.setAverage() <<" is: "<<Sobject2.getLetterGrade();
    return 0;
} */

/* //! average the student using while loop
#include<iostream>
using namespace std;
int main()
{
    unsigned int sum{0},i{1},student;
    cout<<"Input student: ";
    cin>>student;
    while (i <= student)
    {
        cout<<"Enter grade of student "<<i<<" : ";
        unsigned int grade;
        cin>>grade;
        if(grade >= 0 && grade <= 100 )
        {
            sum += grade;
        }
        else
        {
            break;
        }
        i++;
    }
    double average = sum / 10;
    cout<<"\nTotal student grade: "<<sum;
    cout<<"\nAverqge of "<<i<<" student: "<<average;
    return 0;
} */

//! average the student using while loop sentinel(programmer did't know how many times the loop will run in advance)
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    unsigned int sum{0}, i{0}, grade{0};
    double average;
    cout << "Enter grade of student or -1 to quit: ";
    cin >> grade;
    while (grade != -1)
    {
        sum += grade;
        ++i;
        cout << "Enter grade of student or -1 to quit: ";
        cin >> grade;
    }
    if (i != 0)
    {
        average = (double)sum / i;
    }
    cout << "\nTotal student grade: " << sum;
    cout << setprecision(2) << fixed;
    cout << "\nAverqge of " << i << " student: " << average;
    return 0;
}
