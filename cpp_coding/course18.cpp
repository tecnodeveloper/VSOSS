//Program for checking if it is leap year or not
#include "iostream"
using namespace std;
int main()
{
    int year{0};
    cout<<"Input your year: ";
    cin>>year;
    if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        cout<<year<<" is a Leap year";
    else
        cout<<year<<" is not leap year";
    return 0;
}