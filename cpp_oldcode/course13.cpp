#include<iostream>
using namespace std;
int main()
{
   int day{0};
   cout<<"Enter day no: ";
   cin>>day;
   switch (day)
   {
   	 case 1: cout<<"One";
   	 break;
   	 case 2: cout<<"Two";
   	 break;
   	 case 3: cout<<"Three";
   	 break;
   	default : cout<<"Invalid number";
   }
   return 0;
}

