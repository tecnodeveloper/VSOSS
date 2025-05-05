//program for checking lesiure or working hour 
#include<iostream>
using namespace std;
int main()
{
   int hour;
   cout<<"Input hours: ";
   cin>>hour;
   
   if(hour >= 9 && hour <= 18)     // Two relational operator can be join togeather by logical operator So there are main three logical operator 
                                   // &&(AND(*))  ||(OR(+))   !(NOT)   AND will multiply both inputs and output them
                                   // || OR will add the two input then output them
                                   // ! NOT will change if its true then become false.
   cout<<"Working hours";
   else
   cout<<"Lesiure hours";
	return 0;
}
