/* //passing value repference
#include <iostream>
using namespace std;
void first_function(int v)
{
   v = v + 10;
}
void second_function(int &v)
{
   v = v + 10;
}
void third_function(int v)
{
   v = v + 10;
}
void runner()
{
   int x;
   x = 0;
   cout << "Address of x: " << &x << endl;
   cout << "Value of x: " << x << endl;
   first_function(x);
   cout << "Step 2: " << x << endl;
   second_function(x);
   cout << "Step 2: " << x << endl;
   third_function(x);
   cout<< "Step 3:"<<x<<endl;
}

int main()
{
   runner();
   return 0;
} */
/* #include<iostream>
using namespace std;

int main()
{
   int A[] = {1,2,3,4,5};
   cout<<"Adress of array: "<<A<<endl;   
   cout<<"Adress of array 1st element: "<<&A[0]<<endl;
   if(A == &A[0]) cout<<"Equal address";
   return 0;
} */

// Square function declaration and defination test
/* #include<iostream>
using namespace std;
int square(int);
int main()
{
   int number = 2;
   cout<<square(number + 10);
   return 0;
}

int square(int number)
{
   return number * number;
} */

// function that calculate the power of number
#include<iostream>
#include"power.h"
using namespace std;
int power(double,int);
int main()
{
   double number{0};
   int exponenet{0};
   cout<<"Enter number and exponent: ";
   cin>>number>>exponenet;
   cout<<power(number,exponenet);
   return 0;
}