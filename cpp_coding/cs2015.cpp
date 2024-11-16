/* //simple if-else
#include<iostream>
using namespace std;
int main()
{
    int age1{12},age2{10};
    if(age1>age2)
    {
    cout<<"Student1 is older than student2";
    }   
    return 0;
} */

/* //simple if-else
#include<iostream>
using namespace std;
int main()
{
    int amerAge{0},amaraAge{0};
    cout<<"Enter amer Age: ";
    cin>>amerAge;
    cout<<"Enter amara Age: ";
    cin>>amaraAge;
    if(amerAge>amaraAge)
    {
    cout<<"Amer is older than Amara";
    }
    else
    {
    cout<<"Amer is younger than Amara or same age";
    }   
    return 0;
}
 */


/* //program to dicount on the bills
#include<iostream>
using namespace std;
int main()
{
    float bill{0},discount{0};
    cout<<"Enter your bill amount: ";
    cin>>bill;
    if(bill>=5000)
    {
        discount = bill*(15.0/100);
        cout<<"15% discount: "<<discount<<endl;
        bill -= discount;
        cout<<"Total price after discount: "<<bill<<endl;
    }   
    else
    {
        discount = bill*(10.0/100);
        cout<<"10% discount: "<<discount<<endl;
        bill -= discount;
        cout<<"Total price after discount: "<<discount<<endl;
    }   
    return 0;
} */

//Even number c++ using if-else
#include<iostream>
using namespace std;
int main()
{
    int even, no;
    cout<<"Input integer to check even or odd: ";
    cin>>no;
    if(2*(no/2)==no)            //(number / 2)*2 == number
    {
        cout<<"Number is even: "<<no;
    }   
    else
    cout<<"Number is odd"<<no;
    return 0;
}