//! Examples of chapter 2 Dietel C++ How to program

/* //! Single line text printing program
#include <iostream>  //? enable you add libraries input output stream
using namespace std; //? cout and cin uses namcespace std which using namespace std;
int main()           //? main() is the built-in function where program execution start and its like door of program
{
    cout << "Welcome to C++\n"; //? cout(console out) means displaying something on moniter.
    return 0;                 //? program execute sucessfully return 0;
} */

/* //! Program to add two integer
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, sum;                      //? Variables are stored in stack memeory
    cout << "Input first integer: " << endl;  //? In double quotes" " character string is written which is shown as it is written OR prompt user to enter value
    cin >> num1;                              //? cin takes value and assigned to variable num1
    cout << "Input second integer: " << endl; //? Prompt user to enter the value
    cin >> num2;
    sum = num1 + num2;         //? Assigned(=) is used for storing the result in sum after calculating the variable sum
    cout << "Sum is: " << sum; //? Prompting the output
    return 0;
} */

/* //!Using if statement or relational operator practice
#include<iostream>
using namespace std;
int main()
{
    int num1{0}, num2{0};           //?By using comma separator you can write multiple variables in single line Always remeber to intialize with zero
    cout<<"Input two integer for comparing: ";    //?prompt user to enter two integer you can also take multiple inputs in single line
    cin>>num1>>num2;   
    if(num1==num2)  //?if is used to compare two integer here if two variables are equal then block of statement runs
    {
        cout<<num1<<" == "<<num2<<endl;
    }
    if(num1 != num2)
    {
        cout<<num1<<" != "<<num2<<endl;
    }
    if(num1 < num2)
    {
        cout<<num1<<" < "<<num2<<endl;
    }
    if(num1 > num2)
    {
        cout<<num1<<" > "<<num2<<endl;
    }
    if(num1 <= num2)
    {
        cout<<num1<<" <= "<<num2<<endl;  //?Here is logical error don't write equal to first
    }
    if(num1 >= num2)
    {
        cout<<num1<<" >= "<<num2<<endl;
    }
    return 0;
} */

/*//! Display output My first program in different lines 
#include<iostream>
using namespace std;
int main()
{
    int c{0},thisIsAVariable{0},q76354{0},x{0};
    cout<<"Enter an integer: ";
    cin>>thisIsAVariable;
    cout<<"Value is: "<<(thisIsAVariable*3)+5<<endl;
    cout<<"Enter value of x: ";
    cin>>x;
    if(x>0)
    {
    cout<<"The Number is positive"<<endl;
    }
    cout<<"My first program\n in C++"<<endl;
    cout<<"My\n first\n program\n in\n C++\n"<<endl;  //?each world is output on new line
    cout<<"My\t first\t program\t in\t C++\t"<<endl;  //?each world is tab space
    cout<<"My"<<"first"<<"program"<<"in"<<"C++"<<endl; //?Separated by stream insertion operator
    return 0;
} */

/* //! Program will calculate sum of two integer
#include<iostream>               //?Including input output stream for console in & console out
using namespace std;            //?cout and cin are using namespace which are available in std;
int main()                     //?main() is the door of program execution 
{
    int a{0},b{0},sum{0};     //?Declaring variable a and b for storing input and sum for storing addition value
    cout<<"Input two integer for addition: "<<endl;   //?Prompt user to enter two value
    cin>>a>>b;
    sum = a + b;                                  //?sum is storing value after addition of two values
    cout<<"Sum is: "<<sum;                        //?Output the sum on screen
    return 0;
} */


/*//! C++ program to input prompt user for  / * % + -
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two integer: "<<endl;
    cin>>a>>b;
    cout<<"Sum is: "<<a + b<<endl;
    cout<<"Subtraction is: "<<a - b<<endl;
    cout<<"Multiplication is: "<<a * b<<endl;
    cout<<"Division is: "<<a / b<<endl;
    cout<<"Modulas is: "<<a % b<<endl;
    return 0;
} */

/* //!program to print message "Welcome to C++ programming" in different wasys
#include<iostream>
using namespace std;
int main()
{
    cout<<"Welcome to C++ programming"<<endl;
    cout<<"Welcome to " <<"C++ programming"<<endl;
    cout<<"Welcome"<<" to " <<"C++"<<" programming"<<endl;
    cout<<"Welcome to C++ programming\nWelcome to C++ programming"<<endl;
    return 0;
} */

/* //!Program to input two integer for comparison
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Input two integer: ";
    cin>>a>>b;
    if(a != b)
    cout<<"These numbers are not equal"<<endl;
    if(a<b)
    cout<<a<<" is smaller "<<b<<endl;
    if(b<a)
    cout<<b<<" is smaller "<<a<<endl;
    return 0;
} */

/* //!Program that input three number to find +, average, *, smallest and largest
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Input three integer: "<<endl;
    cin>>a>>b>>c;
    cout<<"Sum is: "<<(a+b+c)<<endl;
    cout<<"Average is: "<<(a+b+c)/3<<endl;
    cout<<"Product is: "<<(a*b*c)<<endl;
    if(a < b && a < c)
    cout<<"Smallest is: "<<a<<endl;
    if(b < a && b < c)
    cout<<"Smallest is: "<<b<<endl;
    if(c < a && c < b)
    cout<<"Smallest is: "<<c<<endl;
    if(a > b && a > c)
    cout<<"Largest is: "<<a<<endl;
    if(b > a && b > c)
    cout<<"Largest is: "<<b<<endl;
    if(c > a && c > b)
    cout<<"Largest is: "<<c<<endl;
    return 0;
} */

/* //!Program to calculate diameter circumference and area of circle
#include<iostream>
#include<cmath>
#define PI 3.1415926535897932384626    //?#define is used to include the constant before the program is compiled
using namespace std;
int main()
{
    float r;
    cout<<"Input radius: ";
    cin>>r;
    cout<<"Diameter of circle: "<<2 * r<<endl;
    cout<<"Circumference of circle: "<<2 * PI * r<<endl;
    cout<<"Area of circle: "<<PI * pow(r,2)<<endl;
    return 0;
} */

/* //!program to print C++
#include<iostream>
using namespace std;
int main()
{
    cout<<endl;
    cout<<"  CCCC    +         +      "<<endl;
    cout<<"CC        +         +      "<<endl;
    cout<<"C      ++++++++  +++++++   "<<endl;
    cout<<"CC        +         +      "<<endl;
    cout<<" CCCC     +         +      "<<endl;
    cout<<endl;
    return 0;
} */

/* //!program to display pattern
#include<iostream>
using namespace std;
int main()
{
    cout<<" * * * * * * * * * * *"<<endl;
    cout<<"* * * * * * * * * * *"<<endl;
    cout<<" * * * * * * * * * * *"<<endl;
    cout<<"* * * * * * * * * * *"<<endl;
    cout<<" * * * * * * * * * * *"<<endl;
    cout<<"* * * * * * * * * * *"<<endl;
    cout<<" * * * * * * * * * * *"<<endl;
    cout<<"* * * * * * * * * * *"<<endl;
    return 0;
} */

/* //!Output "%%%%%\n$$$$\n###\n@@\n*\n"
#include<iostream>
using namespace std;
int main()
{
    cout<<"%%%%%\n$$$$\n###\n@@\n*\n";
    return 0;
} */

/* //! program to take 5 integer and show smallest and largest
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e;
    cout << "Input five integers: " << endl;
    cin >> a >> b >> c >> d >> e;
    if (a > b && a > c && a > d && a > e)
        cout <<"Largest is: "<< a << endl;
    if (b > a && b > c && b > d && b > e)
        cout <<"Largest is: "<< b << endl;
    if (c > a && a > b && c > d && c > e)
        cout <<"Largest is: "<< c << endl;
    if (d > a && d > b && d > c && d > e)
        cout <<"Largest is: "<< d << endl;
    if (e > a && e > b && e > c && e > d)
        cout <<"Largest is: "<< e << endl;
    //?For smallest
    if (a < b && a < c && a < d && a < e)
        cout <<"Smallest is: "<< a << endl;
    if (b < a && b < c && b < d && b < e)
        cout <<"Smallest is: "<< b << endl;
    if (c < a && a < b && c < d && c < e)
        cout <<"Smallest is: "<< c << endl;
    if (d < a && d < b && d < c && d < e)
        cout <<"Smallest is: "<< d << endl;
    if (e < a && e < b && e < c && e < d)
        cout <<"Smallest is: "<< e << endl;
    return 0;
} */

/* //!Program to check odd or even number
#include<iostream>
using namespace std;
int main()
{
    int sum{0},a{0},b{0};
    cout<<"Input two integer: ";
    cin>>a>>b;
    sum = a + b;
    if(a%2 == 0)
    cout<<"Even number: "<<a<<endl;
    if(a%2 != 0)
    cout<<"Odd number: "<<a<<endl;
    if(b%2 == 0)
    cout<<"Even number: "<<b<<endl;
    if(b%2 != 0)
    cout<<"Odd number: "<<b<<endl;
    if(sum%2 == 0)
    cout<<"Even number: "<<sum<<endl;
    if(sum%2 != 0)
    cout<<"Odd number: "<<sum<<endl;
    return 0;
} */

/* //!Program to reverse digits
#include<iostream>
using namespace std;
int main()
{
    int digit,number;
    cout<<"Input four digit to reverse: "<<endl;
    cin>>number;
    digit = number % 10;
    cout<<digit;
    number /= 10;
    digit = number % 10;
    cout<<digit;
    number /= 10;
    digit = number % 10;
    cout<<digit;
    number /= 10;
    cout<<number;
    return 0;
} */

/* //! program that take three integer to find factor
#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3;
    cout << "Input three integer: ";
    cin >> n1 >> n2>>n3;
    if (n3 % n1 == 0)
    {
        cout << n1 << "Factors are: " << n3<<endl;
    }
    if (n3 % n2 == 0)
    {
        cout << n2 << "Factors are: " << n3<<endl;
    }
    return 0;
} */

/* //!Program that show ASCII value of character
#include<iostream>
using namespace std;
int main()
{
    char letter;
    cout<<"Input single character for ASCII value: ";
    cin>>letter;
    cout << static_cast<int>(letter);  //?static_cast is used to find out ASCII values of character
    return 0;
} */

/* //! Program for perimeter area of square side of lenghts

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    cout<<"Side of square\tPerimeter of square\tArea of square"<<endl;
    cout<<"1\t\t\t"<<1*4<<"\t\t\t"<<pow(1,2)<<endl;
    cout<<"2\t\t\t"<<2*4<<"\t\t\t"<<pow(2,2)<<endl;
    cout<<"3\t\t\t"<<3*4<<"\t\t\t"<<pow(3,2)<<endl;
    cout<<"4\t\t\t"<<4*4<<"\t\t\t"<<pow(4,2)<<endl;
    cout<<"5\t\t\t"<<5*4<<"\t\t\t"<<pow(5,2)<<endl;
    return 0;
} */

/* //!BMI calculator
#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;
int main()
{
    float w,h,bmi;
    cout<<"Input weight in kilogram: ";
    cin>>w;
    cout<<"Input height in meters: ";
    cin>>h;
    bmi = w / pow(h,2);
    cout<<"\nBMI Values"<<endl;
    if(bmi<18.5)
    cout<<"Underweight "<<endl;
    if(bmi>18.5 && bmi<24.9)  
    cout<<"Normal "<<endl;
    if(bmi>25.0 && bmi<29.9)   
    cout<<"Overweight "<<endl;
    if(bmi>=30.0)  
    cout<<"Obesity "<<endl;
    getch();   
    return 0;
} */

/* //!Car pool Saving calculator
#include<iostream>
using namespace std;
int main()
{
    float miles{0},gas{0},average{0},parking{0},tolls{0},drivingcost{0};
    cout<<"Total miles driven per day: ";
    cin>>miles;
    cout<<"Cost per gallon of gasoline: ";
    cin>>gas;
    cout<<"Average miler per gallons: ";
    cin>>average;
    cout<<"Parking fess per day: ";
    cin>>parking;
    cout<<"Toll per day: ";
    cin>>tolls;
    drivingcost = (tolls+parking+(miles/average)*gas);
    cout<<"User cost per day: "<<drivingcost;
    return 0;
} */

//!Maximal Heart Rate Calculator
#include<iostream>
using namespace std;
int main()
{
    float age,mhr;
    cout<<"Input your age: ";
    cin>>age;
    mhr = 207 - (age * 0.7);
    cout<<"Maximum Heart Rate: "<<mhr;
    return 0;
}