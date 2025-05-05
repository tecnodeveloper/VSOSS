/* //! Short-hand ifelse known as ternary opertor
#include<iostream>
using namespace std;
int main()
{
    int second = 23;
    string result = (second > 20) ? "True" : "False";
    cout<<result;       //?Syntax condtion ? expression1 : expression2
    int ternary = (second < 30 && second > 10) ? ++second : second--;
    cout<<ternary;
    return 0;
} */

#include<iostream>
using namespace std;
int main()
{
    int num1{0}, num2{0};
    cout<<"Input num1 & num2 : ";
    cin>>num1>>num2;
    //? Ternary(3) operator conditon ? expression1 : expression2
    string result = (num1 == num2) ? "num1 is equal to num2" : (num1 > num2) ? " num1 is greater than num2: " : " num1 is smaller than num2";
    cout<<result;
    return 0;
}