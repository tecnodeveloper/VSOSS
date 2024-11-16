// template is used in function and class where there is difference in data type only but logic is same(specialy function overloading)
#include <iostream>
using namespace std;

//Declare template class T 1. T is placeholder you can use multiple placeholder for datatype , function return type is also replace by placeholder (class) or you can write typename also class and typename are also same and variable datatype is also template
template <class T,typename t> //You can give first(T) as int and second variable (t) as float (2,5.3f);
T add(T x, t y)
{
    return x + y;
}
int main()
{
    //You can give any value template will take any datatype userdefined datatype classes or objects
    cout << add(2,3.21) << endl;
    cout << add(2.12, 8.14) << endl;
    return 0;
}

