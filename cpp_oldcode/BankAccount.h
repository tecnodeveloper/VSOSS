#if !defined(BankAccount_H)
#define BankAccount_H
#include <iostream>
#include <string>
using namespace std;

class BankAccount{
    public:
        BankAccount(string name,int intialbalance) : accountName{name}
        {
            if(intialbalance > 0) {
                balance = intialbalance;
            }
            cout<<accountName<<" intial balance is $"<<intialbalance<<endl;
        }        
        int deposit()
        {
            int d;
            cout<<"Enter money you want to deposit or add in $"<<balance<<endl;
            cin>>d;
            balance += d;
            return balance;
            cout<<accountName<<" balance after deposit moneny: "<<balance<<endl;
        }
        int withdraw()
        {
            int w;
            cout<<"Enter money you want to withdraw from $"<<balance<<endl;
            cin>>w;
            if(balance >= w)
            {
                balance -= w;
                return balance;
                cout<<accountName<<" balance after withdraw moneny: "<<balance<<endl;
            }
            else
            {
                cout<<"Withdraw amount is exceeded";
                exit(0);
            }
        }
        void display()
        {
            cout<<accountName<<" balance is "<<balance<<endl;
        }
    private:
    string accountName;
    int balance{0};
};
#endif
