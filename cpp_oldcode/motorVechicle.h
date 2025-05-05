#if !defined(modtorVechicle_H)
#define modtorVechicle_H
#include <string>
#include<iostream>
using std::cout;
using std::string;

class motorVechicle
{
public:
    motorVechicle(int yoManfacture,int engine,string col)
    {
        if(yoManfacture < 1990) yearofManufacture = 0;
        else if(yoManfacture > 1990) 
        {yearofManufacture = yoManfacture; }
        engineCapacity = engine;
        color = col;
        cout<<"Intial Car Detail";
        cout<<"\nYear of manufacture: "<<yearofManufacture;
        cout<<"\nEngine: "<<engineCapacity;
        cout<<"\nColour: "<<color;
    }
    void getmake(string mk)
    {
        make = mk;
    }
    void getfuel(string fu)
    {
        fuelType = fu;
    }
    void getmanufacture(int yom)
    {
        if(yom < 1990) yearofManufacture = 0;
        else if(yom > 1990) yearofManufacture = yom;
    }
    void getcolor(string cl)
    {
        color = cl;
    }
    void getengineCapacity(int engine)
    {
        engineCapacity = engine;
    }
    string setmake()
    {
        return make;
    }
    string setfuel()
    {
        return fuelType;
    }
    int setmanufacture()
    {
        return yearofManufacture;
    }
    string setcolor()
    {
        return color;
    }
    int setengineCapacity()
    {
        return engineCapacity;
    }
    void displayCarDetails(motorVechicle vechicle)
    {
        cout<<"\n\nModified Car Detail";
        cout<<"\nYear of manufacture: "<<vechicle.setmanufacture();
        cout<<"\nEngine: "<<vechicle.setengineCapacity();
        cout<<"\nColour: "<<vechicle.setcolor();
        cout<<"\nVechicle make: "<<vechicle.setmake();
        cout<<"\nFuel type: "<<vechicle.setfuel();
    }

private:
    string make;
    string fuelType;
    string color;
    int yearofManufacture{0};
    int engineCapacity{0};
};

#endif // modtorVechicle_H
