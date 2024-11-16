#ifndef Triangle_H
#define Triangle_H
#include <iostream>
using std::cout;
class Triangle{
    public:
    Triangle(int s1,int s2,int s3) :length1(s1),length2(s2),length3(s3)
    {
        cout<<"\nTriangle 1st side: "<<s1;
        cout<<"\nTriangle 2st side: "<<s2;
        cout<<"\nTriangle 3st side: "<<s3;
    }
    void determineShape()
    {
        if(length1 == length2 && length2 == length3 && length1 == length3)     cout<<"\n\nEquilateral triangle ";
        if(length1 == length2 || length2 == length3 || length1 == length3)     cout<<"\n\nIsosceles triangle ";
        else cout<<"\n\nScalene triangle ";
    }
    private:
    int length1{0},length2{0},length3{0};
};

#endif