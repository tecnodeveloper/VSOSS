#if !defined(Date_H)
#define Date_H

#include<iostream>
using std::cout;
    class Date{
        public:
            Date(int d, int m, int y)
            {
                if(d >= 1 && d <= 31)
                {
                    day = d;
                }
                else
                {
                    day = 0;
                }
                if(m >= 1 && m <= 12)
                {
                    month = m;
                }
                else
                {
                    month = 1;
                }
                if(y >= 2000)
                {
                    year = y;
                }
                else
                {
                    year = 0000;
                }
                cout<<"Intial Date: ";
                cout<<"\n"<<day<<"/"<<month<<"/"<<year;
            }
            void getday(int d)
            {
                if(d >= 1 && d <= 31) day = d;
                else day = 0;
            }
            void getmonth(int m)
            {
                if(m >= 1 && m <= 12) month = m;
                else month = 1;
            }
            void getyear(int y)
            {
                if(y > 2000) year = y;
                else year = 0000;
            }
            int setday()
            {
                return day;
            }
            int setmonth()
            {
                return month;
            }
            int setyear()
            {
                return year;
            }
            void displayDate(Date date)
            {
                cout<<"\n\nCorrect date: ";
                cout<<"\n"<<date.setday()<<"/"<<date.setmonth()<<"/"<<date.setyear();
            }
        private:
            int day{0};
            int month{0};
            int year{0};
    };

#endif // Date_H
