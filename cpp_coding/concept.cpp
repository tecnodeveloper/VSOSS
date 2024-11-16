//Creat car class with some attributes
#include "iostream"
using namespace std;

class Car
{
public:
    string brand;            //brand is an variableAttribute of class
    string model;
    int year;
};
//Creating multiple objects inside main function of car
int main()
{
    Car carobj1;     //carobj1 is an object of class Car
    carobj1.brand = "Civic";
    carobj1.model = "X2022";
    carobj1.year = 2022;

    //Create another object from same class
    Car obj2;
    obj2.brand = "Ford";
    obj2.year = 2021;
    obj2.model = "Mustang";

    //Creating another object from same class
    Car newobj;
    newobj.brand = "Toyata";
    newobj.model = "Corolla";
    newobj.year = 2000;

    //Printing attributes values
    cout<< carobj1.brand <<" "<< carobj1.model<<carobj1.year<<endl;
    cout<<newobj.brand << " "<< newobj.model <<newobj.year<<endl;

}
