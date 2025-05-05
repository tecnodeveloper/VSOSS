//calcultate avg of 6 sub and give grade
#include<iostream>
using namespace std;

typedef int marks;

int main()
{
    marks m1,m2,m3,m4,m5,m6;
    cout<<"Enter marks of 6 subjects: ";
    cin>>m1>>m2>>m3>>m4>>m5>>m6;
    int total = m1+m2+m3+m4+m5+m6;
    float avg = total / 6;

    if (avg >= 60)
    cout<<"A Grade "<<avg<<"%";
    else if(avg >= 35 && avg < 60)
    cout<<"B Grade "<<avg<<"%";
    else
    cout<<"C Grade "<<avg<<"%";
    return 0;
}
