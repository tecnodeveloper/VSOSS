//program that print code
#include<iostream>
using namespace std;

class student
{
public:
    void function();
    int walk();
};
void student::function()
{
    cout<<"I am the function concept";
}
int student::walk() {
    cout<<"We declared the Function method outside the function: ";
}
int main() {
    student obj;
    obj.walk();
    obj.function();
}
