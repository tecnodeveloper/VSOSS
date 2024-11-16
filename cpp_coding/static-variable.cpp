//Static variable is just like global variable they can be accessed anywhere & memory is created before execution of program
//Minor difference b/w static & global is that static scope is inside the block of function but global variable can be accessed anywhere in program
#include<iostream>
using namespace std;
int g = 20;
int stat()
{
    static int a = 10;  //Now this variable is work like global variable but his functionality is just inside this block
    a++;
    cout<<a<<endl;
}
int loc()
{
    int b = 10;
    b++;
    cout<<b<<endl;
}
int main()
{
    stat();   //o/p  11
    stat();   //o/p  12
    cout<<endl;
    loc();    //o/p 11
    loc();    //o/p 11        Here why the ouput does't not become 12 because of local variable they are created fresshly for every call in memory but static variable are created once in memory
   // cout<<a;    Here i am trying to access static variable outside function but compiler thr error bcz static variable have local scope
    return 0;
}