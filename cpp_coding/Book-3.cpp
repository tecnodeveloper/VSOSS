//! Chapter 3 examples of dietel C++ how to program

/* //! Creating and manipulating Account object
#include<iostream>
#include<cstring>
#include "Account.h"
using namespace std;
int main()
{
    Account myAccount("Jane green",50); //? Account is class(data type) myAccount is object(variable)
    cout<<"Intial account name is: "<<myAccount.getName();
    cout<<"\nPlease enter your account name: ";
    string theName;
    getline(cin,theName);
    myAccount.setName(theName);
    cout<<"Name in object myAccount: "<<myAccount.getName();
} */

/* //! Account constructor used to intialize the constructor for Account object
#include<iostream>
#include"Account.h"
using namespace std;
int main()
{
    Account myaccount1("Jane Green");
    Account myaccount2("John Blue");
    cout<<"Account1 is: "<<myaccount1.getName()<<endl;
    cout<<"Account1 is: "<<myaccount2.getName()<<endl;
    return 0;
}  */

/* //! Performing validation with get and set function
#include<iostream>
#include<cstring>
#include "Account.h"
using namespace std;
int main()
{
    Account myaccount1("Jane Green",50);
    Account myaccount2("John Blue",-565);
    myaccount1.displayAccount(myaccount1);
    myaccount2.displayAccount(myaccount2);
    int deposit{0},withdraw{0};
    cout<<"\nEnter deposit amount for account1: ";
    cin>>deposit;

    myaccount1.setbalance(deposit);
    myaccount1.displayAccount(myaccount1);
    cout<<endl;

    cout<<"\nEnter deposit amount for account2: ";
    cin>>deposit;
    myaccount2.setbalance(deposit);
    myaccount2.displayAccount(myaccount2);
    cout<<endl;

    cout<<"\nEnter withdraw amount for account1: ";
    cin>>withdraw;
    myaccount1.withdraw(withdraw);
    myaccount1.displayAccount(myaccount1);
    myaccount2.displayAccount(myaccount2);
    cout<<"\nEnter withdraw amount for account2: ";
    cin>>withdraw;
    myaccount2.withdraw(withdraw);
    myaccount1.displayAccount(myaccount1);
    myaccount2.displayAccount(myaccount2);
    return 0;
}  */

/* //! class Invoice private six data member and constructor
#include <iostream>
#include "Invoice.h"
#include <string>
using namespace std;
int main()
{
    Invoice object1("A-1", "Nothing in description", -1, 10);

    object1.getName("A-1");
    object1.getDescription("Modified description");
    object1.getQuantity(10);
    object1.getPrice(42);  
    object1.getDiscount(0.05);

    cout << "\n\nModified INVOICE";
    cout << "\nPart number: " << object1.setName();
    cout << "\nPart description: " << object1.setDescription();
    cout << "\nQuantity: " << object1.setQuantity();
    cout << "\nPrice: " << object1.setPrice();
    cout << "\nVAT: " << object1.setVAT();
    cout << "\nDiscount: " << object1.setDiscount();
    cout << "\nInvoice amount: " << object1.setInvoiceAmount();
    return 0;
} */

/* //!class motorVechicle private data member make, fuelType, color, yearofManufacture, engineCapacity member function get and set for each data member and displayCarDetail to display the car detail

#include<iostream>
#include"motorVechicle.h"
using namespace std;
int main()
{
    motorVechicle vechicle(1992,4,"blue");
    vechicle.getcolor("Black");
    vechicle.getengineCapacity(5);
    vechicle.getfuel("Diesel");
    vechicle.getmake("Xli");
    vechicle.getmanufacture(2004);
    vechicle.displayCarDetails(vechicle);
    return 0;
} */

/* //! class Date private data member month,day,year constructor to intialize value member function set and get for each data member displayDate

#include<iostream>
#include"Date.h"
using namespace std;
int main()
{
    Date date(12,8,2004);
    date.getday(13);
    date.getmonth(8);
    date.getyear(2024);
    date.displayDate(date);
    return 0;
} */


/* //!Member intializer list
#include<iostream>
#include<string>
using namespace std;
class Account
{
    public:
        Account(int a,string fn,string ln, int ba) : accountname(a), Fname(fn),Lname(ln),balance(ba)
            {}
        void displaydata()
        {
            cout<<"Account name: "<<accountname<<endl;
            cout<<"First name: "<<Fname<<endl;
            cout<<"Last name: "<<Lname<<endl;
            cout<<"Balance: $"<<balance<<endl;
        }
    private:
        string Fname;
        string Lname;
        unsigned int accountname;
        double balance;
};
int main()
{
    Account object(2323,"Mukesh","Ambani",23232);
    object.displaydata();
    return 0;
} */

/* //! Making Difference
//! Target-Health Rate calculator

#include<iostream>
#include"HeartRates.h"
using namespace std;
int main()
{

    string fn,ln;
    int da,dm,dy;
    double w,h,bmi;
    cout<<"Input first name: "<<endl;
    cin>>fn;
    cout<<"\nInput last name: "<<endl;
    cin>>ln;
    cout<<"\nInput your age(dd,mm,yyyy): ";
    cin>>da>>dm>>dy;
    HeartRates object(fn,ln,da,dm,dy);
    object.getfname(fn);
    object.getlname(ln);
    object.getDay(da);
    object.getMonth(dm);
    object.getYear(dy);
    cout<<"\nPerson Name: "<<object.setfname()<<" "<<object.setlname();
    cout<<"\nDate of birth: "<<object.setDay()<<" "<<object.setMonth()<<" "<<object.setYear();
    cout<<"\nAge: "<<object.setage();
    cout<<"\nMaximum Heart Rate: "<<object.maxHeartRate()<<" bpm"; 
    object.targetHeartRate(); 
    return 0;
} */

/* //! Computerization of Health Records
#include<iostream>
#include "HealthProfile.h"
using namespace std;
int main()
{
    string fn,ln;
    int da,dm,dy;
    int gen;
    double w,h,bmi;
    cout<<"Input first name: "<<endl;
    cin>>fn;
    cout<<"\nInput last name: "<<endl;
    cin>>ln;
    cout<<"\nInput your age(dd,mm,yyyy): ";
    cin>>da>>dm>>dy;
    cout<<"Input gender:\t1 for Male\t2 for Female\t3 for Shemale: ";
    cin>>gen;
    cout<<"\nInput your height(inches): ";
    cin>>h;
    cout<<"\nInput your weight(pounds): ";
    cin>>w;
    HealthProfile object(fn,ln,da,dm,dy,h,w);
    object.getgender(gen);
    object.getBMI(h,w);
    object.getfname(fn);
    object.getlname(ln);
    object.getDay(da);
    object.getMonth(dm);
    object.getYear(dy);
    cout<<"\nPerson Name: "<<object.setfname()<<" "<<object.setlname();
    cout<<"\nDate of birth: "<<object.setDay()<<" "<<object.setMonth()<<" "<<object.setYear();
    cout<<"\nGender: "<<object.setGender();
    cout<<"\nAge: "<<object.setage();
    cout<<"\nMaximum Heart Rate: "<<object.maxHeartRate()<<" bpm"; 
    object.targetHeartRate();
    cout<<"BMI "<<object.setBMI();
    return 0;
} */

/* //!Automating Electric Energy purchase

#include<iostream>
#include"ElectricBill.h"
using namespace std;
int main()
{
    double am;
    cout<<"Enter amount to buy electricity: ";
    cin>>am;
    ElectricBill object(am);
    object.getAmount(am);
    cout<<"\nAmount paid: "<<object.setAmount()<<" TZs";
    cout<<"\nVAT(18%) tax: "<<object.setVAT();
    cout<<"\nREA(3%) tax: "<<object.setREA();
    cout<<"\nEWURA(1%) tax: "<<object.setEWURA();
    cout<<"\nFixed charges: 5000";
    cout<<"\nUnits provided: "<<object.setUnits()<<" KWH";
    return 0;
} */