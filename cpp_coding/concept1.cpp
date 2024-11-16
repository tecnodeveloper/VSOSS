// Car is an object and the car has attributes such as weight and color and methods such as drive and brake.
//Attributes and methods(function inside the classes are called methods) are basically variables and functions that belongs to the class These are referred to as class members

#include "iostream"
using namespace std;

class MyClass                 //Class keyword is used to create class called Myclass
{                             //The public keyword is an access specifier which specifies that members(attributesVariable and functionMember are accessible from outside the class you will learn access specifiers laters
public:
    int myNum;               //Inside the class there is integer variable myNum and string variable myString which is access specifier When variable are declared within class they are called attributes.
    string myString;
};                           //At last end the class definition with semicolon ;
class myclass {
public:
    int myNum;
    string mystring;
};
int main()
{
    myclass myobj;          //Create an object myobj from myclass
    //Access attributes and set values.
    myobj.myNum=23;
    myobj.mystring ="Some text";
    //printing attributes inside main function
    cout<<myobj.myNum<<endl;
    cout<<myobj.mystring<<endl;
}