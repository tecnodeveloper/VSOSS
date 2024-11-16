//Object and class concept
#include<iostream>
using namespace std;
class Rectangle
{
    public:
    int length;
    int breath;
    int area()
    {
        return length*breath;
    }
    int paremeter()
    {
        return 2*(length+breath);
    }
};
int main()
{
    Rectangle r1, r2;
    r1.length=10;
    r1.breath=5;
    cout<<r1.area()<<endl;
    cout<<r1.paremeter()<<endl; 
    r2.length=20;
    r2.breath=10;
    cout<<r2.area()<<endl;
    cout<<r2.paremeter()<<endl;
    return 0;
}