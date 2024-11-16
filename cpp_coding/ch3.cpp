#include <iostream>
#include "power.h"
using namespace std;
/* int main()
{
    double ringCircle, innerCircle, outerCircle;
    cout << "Enter radius of inner circle";
    cin >> innerCircle;
    cout << "Enter radius of outer circle";
    cin >> outerCircle;
    if (outerCircle > innerCircle)
    {
        ringCircle = areaofcircle(outerCircle) - areaofcircle(innerCircle);
    }
    else
    {
        cout << "Please enter outer value greater inner";
        return 0;
    }
    cout << "Area of ring: " << ringCircle;
    return 0;
} */
/* int main() {
    function();

    return 0;
} */

/* { // defualt it take return type as int
    cout << "Enter number for odd or even: ";
    int number{0};
    cin >> number;
    if (isEven(number))
        cout << "even";
    else
        cout << "false";
} */

/* int main()
{
    double x;
    int pow, result;
    cout << "Enter the number and power: ";
    cin >> x >> pow;
    if (pow > 0)
    {
        pow = pow;
    }
    else
    {
        x = 0;
    }
    result = raisetopower(x, pow);
    cout << result;
    return 0;
} */

/* void f();
int i;
int main(int argc, char const *argv[])
{
    i = 10;
    cout<<"value of i in main(): "<<i<<endl;
    f();
    cout<<"value of i in main(): "<<i<<endl;
    return 0;
}
void f()
{
    cout<<"In f() value of i is: "<<i<<endl;
    i = 20;
}*/

/* //!call by value(we sent the copy of value to calling function not orginal value)
void f(int);
int main() {
    int i;
    i = 10;
    cout<<"In main() the value of i is: "<<i<<endl;
    f(i);
    cout<<"In main() the value of i after f(i) is: "<<i<<endl;

    return 0;
}
void f(int i)
{
    i *= 2;
    cout<<"the value of i after f(i) is: "<<i<<endl;

} */

/* int main() {
    double x;
    x = 123.456;
    cout<<"The function before calling is "<<x<<endl;
    square(&x);
    cout<<"The function after calling is: "<<x<<endl;
    return 0;
} */
/* int main() {
    cout<<factorial(4);
    return 0;
} */
/* int main() {
    int age[10],totalage{0};
   for(int i = 1; i <= 10; i++)
    {
        cout<<"Enter age of student "<<i<<" is: ";
        cin>>age[i];
    }
    for(int i = 1; i <= 10; i++)
    {
        totalage += age[i];
    }
    int average = totalage / 10;
    cout<<"Average of 10 student is: "<<average;
    return 0;
} */

/* #include<iostream>
using namespace std;
int main()
{
    int z{0},i{0},a[100];
    do
    {
        cout<<"Enter positive number or -1 to exit: ";
        cin>>z;
        if(z != -1)
        {
            a[i] = z;
        }
        i++;
    } while (z != -1 && i < 100);
    cout<<"Total positive number: "<<i-1;
} */

/* // !Copying array concept is similar to assignment operator
#include<iostream>
using namespace std;
int main()
{
    int a[5] = {1,2,3,4,};
    int b[5] = {5,6,7,8,9};
    for (int i = 0; i < 5; i++)
    {
        a[i] = b[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i];
    }

    return 0;
} */

/* #include <iostream>
using namespace std;
int square(int n)
{
    return n * n;
}
int main()
{
    int total, z, squ[10], a[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter positive number: ";
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        squ[i] = square(a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        total += squ[i];
    }
    cout<<"Sum of squares: "<<total;
    return 0;
} */

/* #include <iostream>
using namespace std;
int main()
{
    int i, z, a[100];
    for (int i = 0; i < 100; i++)
    {
        a[i] = i;
    }
    cout << "Enter number to search in arrray: ";
    cin >> z;
    for (int i = 0; i < 100; i++)
    {
        if (a[i] == z)
        {
            cout << "We found at index: " << i;
            exit(0);
        }
    }
    cout << "We count not find number in array ";
    return 0;
} */

/* #include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int i,z,a[100];
    for (int i = 0; i < 100; i++)
    {
        a[i] = (1 + rand() % 6);
    }
    cout<<"Please enter number: ";
    cin>>z;
    for (int i = 0; i < 100; i++)
    {
        if (a[i] == z)
        {
            cout << "We found at index: " << i;
            exit(0);
        }
    }
    cout << "We count not find number in array ";
    return 0;
} */

/* #include <iostream>
using namespace std;
int main()
{
    char name[] = "Best way to intialize char array";
    for (int i = 0; i < 1000; i++)
    {
        cout << name[i];
    }

    return 0;
} */

/* #include <iostream>
using namespace std;
int main()
{
    char name[100];
    cout << "Please enter your name: ";
    cin >> name;
    for (int i = 0; i < 100; i++)
    {
        if(name[i] == '\0')
        {
            break;
        }
        else
        cout << name[i];
    }
    return 0;
} */

/* #include <iostream>
using namespace std;
int main()
{
    int a[20], b[20], i{0}, equal{0};
    const int arraysize{5};
    cout << "Please enter five integer in first array: ";
    for (int i = 0; i < arraysize; i++)
    {
        cin >> a[i];
    }
    cout << "Please enter five integer in second array: ";
    for (int i = 0; i < arraysize; i++)
    {
        cin >> b[i];
    }

    cout << "The value in first array are: ";
    for (int i = 0; i < arraysize; i++)
    {
        cout << "\t" << a[i];
    }
    cout << "\n"
         << "The value in second array are: ";
    for (int i = 0; i < arraysize; i++)
    {
        cout << "\t" << b[i];
    }
    for (int i = 0; i < arraysize; i++)
    {
        if (a[i] == b[i])
            equal = 1;
        else
            equal = 0;
    }
    if (equal == 1)
    {
        cout << "\nArcrays are equal";
    }
    else
        cout << "\nArrays are not equal";
    return 0;
} */

/* #include <iostream>
using namespace std;
int main()
{
    int x[] = {1, 2, 3, 4, 5};
    int y[] = {6, 7, 8, 9, 10};
    int temp[] = {0};
    temp[0] = x[0];
    x[0] = y[0];
    y[0] = temp[0];
    cout<<"X array first element after swapping: "<<x[0] << "\nY array element after swapping: " <<y[0];
    return 0;
} */

//! Sorted array
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Input array size: ";
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Input array element " << i << " : ";
        cin >> a[i];
    }
    while (a[size] != -1)
    {
        
    }
    
    

    return 0;
}



































/* //!Binary Search
#include<iostream>
using namespace std;
int main()
{
    int a[10] = {1,4,2,5,6,7,8,3,9};
    for (int i = 0; i < 10; i++)
    {

    }

    return 0;
} */