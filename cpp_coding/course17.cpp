//Program to offer discounts on total bill Amount
#include "iostream"
using namespace std;
int main() {
    int billamo{0}, Discount{0},Totamount{0};
    cout << "Input Your bill Amount: ";
    cin >> billamo;
    //Using if-else ladder you can write this type of statement.
    if (billamo >= 100 && billamo <= 500)
    {
        cout<<"Bill Amount is: "<<billamo<<endl;
        Discount = (billamo * 10) / 100;
        cout<<"Discount is:"<<Discount<<endl;
        Totamount = billamo - Discount;
    cout << "10% discount: "<<Totamount<<" Discounted Amount."<<endl;
    }
    else if(billamo > 500 && billamo <= 1000) {
        cout<<"Bill Amount is: "<<billamo<<endl;
        Discount = (billamo * 20) / 100;
        cout<<"Discount is: "<<Discount<<endl;
        Totamount = billamo - Discount;
        cout << "20% Discount: "<<Totamount<<" Discounted Amount."<<endl;
    }
    else if (billamo < 100)
        cout<<"No discount";
    else
        cout<<"Invalid Number";
    return 0;
}