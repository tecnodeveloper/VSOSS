#if !defined(HealthProfile_H)
#define HealthProfile_H
#include <iostream>
#include <string>
#include<cmath>
#include <time.h>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::pow;
class HealthProfile
{
public:
    HealthProfile(string fn, string ln, int d, int m, int y, double h, double w) : fname(fn), lname(ln), height(h), weight(w) {}
    void getfname(string f)
    {
        fname = f;
    }
    void getlname(string l)
    {
        lname = l;
    }
    string setfname()
    {
        return fname;
    }
    string setlname()
    {
        return lname;
    }
    void getgender(int g)
    {
        gender = g;
    }
    void getDay(int d)
    {
        if (d >= 1 && d <= 31)
        {
            day = d;
        }
        else
        {
            day = 0;
        }
    }
    void getMonth(int m)
    {
        if (m >= 1 && m <= 12)
        {
            month = m;
        }
        else
        {
            month = 0;
        }
    }
    void getYear(int y)
    {
        year = y;
    }
    int setDay()
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
    int setage()
    {
        age = 2024 - year;
        return age;
    }
    int maxHeartRate()
    {
        return 220 - age;
    }
    int setGender()
    {
        if(gender == 1) {cout<<"\nMale ";}
        if(gender == 2) {cout<<"\nFemale ";}
        if(gender == 3) {cout<<"\nShemale ";}
        return gender;
    }
    void targetHeartRate()
    {
        cout << "\nTarget Heart Rate( 50 - 85% ):" << maxHeartRate() * 0.5 << " - " << maxHeartRate() * 0.85;
    }
    void getBMI(double h, double w)
    {
        height = h;
        weight = w;
    }
    double setBMI()
    {
        double bmi;
        bmi = weight / pow(height, 2);
        cout << "\nBMI Values" << endl;
        if (bmi < 18.5)
            cout << "Underweight " << endl;
        if (bmi > 18.5 && bmi < 24.9)
            cout << "Normal " << endl;
        if (bmi > 25.0 && bmi < 29.9)
            cout << "Overweight " << endl;
        if (bmi >= 30.0)
            {cout << "Obesity " << endl;}
        return bmi;
    }

private:
    string fname;
    string lname;
    int gender;
    int day, month, year, age;
    double height, weight;
};

#endif // HealthProfile_H
