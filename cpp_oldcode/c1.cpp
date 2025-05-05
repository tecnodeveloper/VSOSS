//OOP concept
#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int rollno;
};

int main()
{
    student st1;
    student st2;
    st1.name = "Zain Ali";
    st2.rollno = 12;
    cout<<st1.name<<" "<<st2.rollno<<endl;
    //Object pointer can be access only using -> point arrow symbol
    student *p = new student();
    p->name = "Bhai";
    p->rollno = 13;
    cout<<p->name<<" "<<p->rollno<<endl;
    
    return 0;
}