//Dynamic declaration example
#include<iostream>
using namespace std;
int main()
{
    int a=2,b=4,c=6;
    if(int k = b > a )
{
    cout<<k;
}
// cout<<k;
//you can't access k outside the if block bcz its local variable or dynamic declaration the k memory in stack is gone after executing if block
    return 0;
}
