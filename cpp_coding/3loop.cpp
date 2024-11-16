//three basic loops in one program 
#include<iostream>
using namespace std;
int main()
{
   int a{0};
   while(a < 10)
   {
   cout<<"a "<<a<<endl;
   a++;
   }

   //do while loop execute itself ones than check condition, so it will execute itself ones also if the condition is false.
   int b{0};
   do 
   {
   	cout<<"b "<<b<<endl;
   	b++;
   }
   while(b < 10);

   //for loop initialize,condition,update itself inside brackets, so you don't need to initialize outside the brackets
   
   for(int i{1};i<=10;i++)
   {
   	cout<<"i "<<i<<endl;
   	i++;
   }
   return 0;
}

