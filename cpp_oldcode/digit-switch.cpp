//Switch example
#include<iostream>
using namespace std;
int main()
{
    int digit;
    cout<<"Enter digit from (0-9): "<<endl;
    cin>>digit;

    switch (digit)
    {
    case 1:
    cout<<"One";
        break;
    case 2:
    cout<<"Two";
        break;
    case 3:
    cout<<"Three";
        break;
    case 4:
    cout<<"Four";
        break;
    case 5:
    cout<<"Five";
        break;
    case 6:
    cout<<"Six";
        break;
    case 7:
    cout<<"Seven";
        break;
    case 8:
    cout<<"Eight";
        break;
    case 9:
    cout<<"Nine";
        break;
    
    default:
    cout<<"Invalid Digit";
        break;
    }
    return 0;
}
