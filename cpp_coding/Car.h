#ifndef Car_H
#define Car_H
#include<iostream>
#include<string>
using namespace std;

    class Car
    {
        public:
        string setCar(string a, string b)
        {
            company = a;
            model = b;
            return company;
            return model;
        }
        int getYear(int y)
        {
            if(y > 1990)
            {
                year = y;
            }
            return year;
        }
        void display(Car car1)
        {
            cout<<"\nCar Company name is: "<<company<<endl;
            cout<<"Car model is: "<<model<<endl;
            cout<<"Year you have bought the car: "<<year<<endl;
            cout<<endl;
        }
        private:
        string company,model;
        int year{0};
    };
#endif