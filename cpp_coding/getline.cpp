//Program for inputing user his full name and print welcome message
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string nam;
    cout<<"Enter your name Sir: ";
    getline(cin,nam);
    cout<<"Welcome to CodeAcademic "<<nam<<endl;
    return 0;
}