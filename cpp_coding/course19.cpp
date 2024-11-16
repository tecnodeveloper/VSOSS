//program for reversing number 153 to 351
#include "iostream"
using namespace std;
int main()
{
    int n,rev,r,m;
    cout<<"Input the number: ";
    cin>>n;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }
    cout<<"Reverse number: "<<rev<<endl;
    if(m == rev) {
        cout << "Its palindrome(reversing a number has same result)";
    }
    else
    {
        cout << "Its not palindrome";
    }
    return 0;
}