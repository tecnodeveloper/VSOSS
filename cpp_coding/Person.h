#ifndef Person_H
#define Person_H
#include<iostream>
#include<string>
using namespace std;

    class Person
    {
        public:
        string setName(string a, string b)
        {
            name = a;
            country = b;
            return name;
            return country;
        }
        int getAge(int ag)
        {
            age = ag;
            return age;
        }
        void display(Person p1)
        {
            cout<<"\n\nName is: "<<name<<endl;
            cout<<"Age is: "<<age<<endl;
            cout<<"Country is: "<<country<<endl;
            cout<<endl;
        }
        private:
        string name,country;
        int age{0};
    };
#endif