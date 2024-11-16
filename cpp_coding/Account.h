//! Separate header file contain class of cpp program Book-3

#ifndef Account_H
#define Account_H
#include<iostream>
#include<string>
using namespace std;

    class Account
    {
        public:
        Account(string accountname, int intialbalance)    : name{accountname}
        {
            if(intialbalance >= 0) balance = intialbalance;
        }      
        void setName(string accountname)
        {
            name = accountname;
        }
        string getName()
        {
            return name;
        }
        void setbalance(int d)
        {
            if(d > 0) balance += d;
        }
        void withdraw(int w)
        {
            if(w <= balance) balance -= w;
            else cout<<"withdrawal amount has been exceeded amount balance";
        }
        int getbalance()
        {
            return balance;
        }
        void displayAccount(Account accountTodisplay)
        {
            // cout<<"Adding "<<dep<<" to account1 balance";
            cout<<accountTodisplay.getName()<<" balance is $"<<accountTodisplay.getbalance()<<endl;
        }
        private:
        string name;
        int balance{0};
    };
#endif

        /*Account()
        {
            cout<<"Iam defualt constructor i called everytime when an object is created i don't take any argument or parameter. What makes special from getName() and setName() is Constructor have same as class name. constructor does't have return type. ";
        } */