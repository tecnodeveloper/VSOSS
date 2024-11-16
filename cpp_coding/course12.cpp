//Program for amstrong number(if the number is taken then take the cube of each digit and add them then the number become amstrong number)
#include<iostream>
using namespace std;
int main()
{
    int n,sum{0},r,m;
    cout<<"Input digits: ";
    cin>>n;
    m = n;
    while (n>0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + r*r*r;
    }
    if(sum == m)
        cout<<"Its amstrong number.";
    else
        cout<<"Its not amstrong number";
    return 0;
}

