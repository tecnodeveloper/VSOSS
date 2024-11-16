//!Header file
#if !defined(power_H)
#define power_H
#include<iostream>
#define PI 3.14159265359
using namespace std;

/* double raisetopower(double x, int pow)
{
    int result = 1.0;
    for(int i = 1; i <= pow; i++)  //for(int i = 0; i < pow; i++)
    {
        result *= x ;
    }
    return result;
} */
/* void square(double *x)
{
    *x = *x * *x;
    cout<<*x<<endl;
} */
/*
double areaofcircle(double radius)
{
    return (PI * square(radius));
} */
/* int isEven(int number)
{
    if((number/2)*2 == number) return true;
    else return false;
} */
/* void function()
{
    int outer{0};
    {
        int inner{1};
        inner = outer;
        cout<<"Perfect";
    }
    inner++;
    cout<<"error";
} */
long factorial(long n)
{
    if(n == 1) return (n);
    else return (n * factorial(n-1));
}

//!Excercise
//Fibonacci series
//Find power of number using recursive technique
#endif 
