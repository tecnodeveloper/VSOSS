//Heap memory vs Dynamic Memory

//Dynamic Memory
#include<iostream>
using namespace std;
int main()
{
    int *p;
    cout<<"Enter value of x to create memory in dynamic allocation: "<<endl;
    p = new int;
    cin>>*p;
    cout<<"Value of X store in dynamic allocation: "<<*p<<endl;
    
    delete p;                  //Deallocating Dynamic memory
    return 0;
}















//Stack Memory

// #include<iostream>
// using namespace std;
// int main()
// {
//     int x;
//     cout<<"Enter value of x to store in stack memory: "<<endl;
//     cin>>x;
//     cout<<"Store in stack Memory at compile time: "<<x<<endl;
//     return 0;
// }