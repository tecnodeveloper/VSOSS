//Program for menu driven operation.
#include "iostream"
using namespace std;
int main()
{
    int op{0},n1{0},n2{0};
    cout<<"Menu\n"<<"1. Addition\n"<<"2. Subtraction\n"<<"3. Multiplication\n"<<"4. Division\n"<<"5. Modulus\n"<<endl;
    cout<<"Enter any operation to be performed: ";
    cin>>op;

    cout<<"Input first number: "<<endl;
    cin>>n1;
    cout<<"Input Second number: "<<endl;
    cin>>n2;
    //Using switch case you write menu driven program.
    switch (op)
    {
        case 1:
            cout<<"Addition is: "<<n1+n2<<endl;
            break;
        case 2:
            cout<<"Subtraction is: "<<n1-n2<<endl;
            break;
        case 3:
            cout<<"Multiplication is: "<<n1*n2<<endl;
            break;
        case 4:
            cout<<"Division is: "<<n1/n2<<endl;
            break;
        case 5:
            cout<<"Mod is: "<<n1%n2<<endl;
            break;
        default:cout<<"Invalid Number";
    }
    return 0;
}