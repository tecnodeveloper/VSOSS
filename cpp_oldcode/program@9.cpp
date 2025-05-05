//Enumeration is user-defined data type that consists of integral constants. To define an enumeration, keyword enum is used.
#include<iostream>
using namespace std;
int main()
{
	enum day{Monday,Tuesday,Wensday, Thursday,Friday,Saturday,Sunday};                        //Defining the constants togeather by using Enmeration(enum) keyword
    //       0,        1     ,2         ,3       ,4     ,5      ,6   day is user-defined data-type and it holds constant like default value start with 0,1,2,3,4 go on starts from zero or you can assign value to them also 
    day Today = Friday;           //you can change the value from defualt value to set your own value 
    cout << Today;

}	
