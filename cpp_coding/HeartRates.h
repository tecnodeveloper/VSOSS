#if !defined(HeartRates_H)
#define HeartRates_H

#include<iostream>
#include<string>
#include<time.h>
using std::string;
using std::cout;
using std::cin;
using std::endl;

class HeartRates{
public:
    HeartRates(string fn,string ln,int d,int m,int y) : fname(fn), lname(ln) {}
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
    void targetHeartRate()
    {
        cout<<"\nTarget Heart Rate( 50 - 85% ):" <<maxHeartRate() * 0.5 << " - "<<maxHeartRate() * 0.85;
    }
private:
    string fname;
    string lname;
    int day,month,year,age;
};
#endif