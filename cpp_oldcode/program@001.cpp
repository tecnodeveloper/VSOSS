//practice function for finding roots of quadratic equations.
#include <iostream>
#include <cmath>
using namespace std;
int QuadraticEqu()
{
    int a,b,c;
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter value of b : ";
    cin>>b;
    cout<<"Enter value of c : ";
    cin>>c;
    int root1 = (-b + sqrt((b*b) - (4 * a * c))) / (2*a);
    int root2 = (-b - sqrt((b*b) - (4 * a * c))) / (2*a);
    cout<<"Root of Quadratic equation : "<<root1<<"\n"<<root2<<endl;
    return 0;
}
int main()
{
    QuadraticEqu();
    return 0;
}