//Program for reversing number
#include<iostream>
using namespace std;
int main()
{
    int n,rem;
    cout<<"Input number for reverse: ";
    cin>>n;

    while (n > 0)                  //While loop is used because there is no counter controlled loop is used
    {
        rem = n % 10;
        n = n / 10;
    }
    cout<<"Reverse of given number "<<rem;
    return 0;
}
