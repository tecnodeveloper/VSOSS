//! Basic C++ Program from w3resource
//! For colouring comments used extension "Better Comments"
//!  exclamentry sign(!) is used for what program do
//? question mark(?) show real comments written in program

/* //!Welcome message program
#include <iostream>
using namespace std;
int main()
{
    cout << "\nWelcome";
    return 0;
} */

/* //!Perform addition
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter value of a: "<<endl;
    cin>>a;
    cout<<"Enter value of b: "<<endl;
    cin>>b;
    cout<<"\nPrint the sum of two numbers"<<endl;
    cout<<"\n---------------------------------"<<endl;
    cout<<"\nThe sum of "<<a<<" and "<<b<<" is : "<<a+b<<endl;
    return 0;
} */

/* //!Size of operator
#include <iostream>
using namespace std;
int main()
{
    cout << "The sizeof(char): " << sizeof(char) << endl;
    cout<<"The sizeof(short): "<<sizeof(short)<<endl;
    cout<<"The sizeof(int): "<<sizeof(int)<<endl;
    cout<<"The sizeof(long): "<<sizeof(long)<<endl;
    cout<<"The sizeof(long long): "<<sizeof(long long)<<endl;
    cout<<"The sizeof(float): "<<sizeof(float)<<endl;
    cout<<"The sizeof(double): "<<sizeof(double)<<endl;
    cout<<"The sizeof(long double): "<<sizeof(long double)<<endl;
    cout<<"The sizeof(bool): "<<sizeof(bool)<<endl;
    return 0;
} */

/* //!Built-in datatype
#include<iostream>
using namespace std;
int main()
{
    cout<<"The maximum limit of int data type :"<<INT_MAX<<endl;
    cout<<"The minimum limit of int data type: "<<INT_MIN<<endl;
    cout<<"The maximum limit of unsigned int data type: "<<UINT_MAX<<endl;
    cout<<"The maximum limit of long long data type: "<<LLONG_MAX<<endl;
    cout<<"The minimum limit of long long data type: "<<LLONG_MIN<<endl;
    cout<<"The maximum limit of Unsigned long long data type: "<<ULLONG_MAX<<endl;
    cout<<"The bits contain int char datatype: "<<CHAR_BIT<<endl;
    cout<<"The maximum limit of char data type: "<<CHAR_MAX<<endl;
    cout<<"The minimum limit of char data type: "<<CHAR_MIN<<endl;
    cout<<"The maximum limit of signed char data type: "<<SCHAR_MAX<<endl;
    cout<<"The minimum limit of signed char data type"<<SCHAR_MIN<<endl;
    cout<<"The maximum limit of unsigned char data type: "<<UCHAR_MAX<<endl;
    cout<<"The maximum limit of short data type: "<<SHRT_MAX<<endl;
    cout<<"The minimum limit of short data type: "<<SHRT_MIN<<endl;
    cout<<"The maximum limit of unsigned short data type: "<<USHRT_MAX<<endl;
    return 0;
} */

/* //!Basic primitives datatype
#include <iostream>
using namespace std;
int main()
{
    cout << "Check Whether the primitive values crossing the limits or not: " << endl;
    cout << "----------------------------------" << endl;
    char gender = 'F';
    bool ismarried = true;
    unsigned short sons = 2;
    int yoa = 2009;
    int SalaryYear = 1500000;
    float height = 79.48f;
    float GPA = 4.69f;
    int salaryDrawn = 12047235;
    long long Balancetill = 995324987;
    cout << "The Gender is: " << gender << endl;
    cout << "Is she married: " << ismarried << endl;
    cout << "Number of sons she has: " << sons << endl;
    cout << "Year of her appointment: " << yoa << endl;
    cout << "Salary for a year: " << SalaryYear << endl;
    cout << "Height is: " << height << endl;
    cout << "GPA is: " << GPA << endl;
    cout << "Salary drawn upto: " << salaryDrawn << endl;
    cout << "Balance till: " << Balancetill << endl;
    return 0;
} */

/* //!Basic expression
#include <iostream>
using namespace std;
int main()
{
    short sum = 5 + 7;
    float a = 3.7f + 8.0f;
    float b = 5 + 8.0f;
    short c = 5 - 7;
    float d = 3.7f - 8.0f;
    float e = 5 - 8.0f;
    short f = 5 * 7;
    float g = 3.7f * 8.0f;
    float h = 5 * 8.0f;
    short k = 5 / 7;
    float z = 3.7f / 8.0f;
    float x = 5 / 8.0f;
    cout << sum << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    cout << g << endl;
    cout << h << endl;
    cout << k << endl;
    cout << z << endl;
    cout << x << endl;
    return 0;
} */

/* //!Basic overflow of program range + 1
#include <iostream>
using namespace std;
int main()
{
    cout << "Range of int is [" << INT_MAX << " to " << INT_MIN << endl;
    int max = INT_MAX;
    cout << "\nBefore OVERFLOW: " << max << endl;
    cout << "After OVERFLOW: " << ++max << endl;
    int min = INT_MIN;
    cout << "\nBefore OVERFLOW: " << min << endl;
    cout << "Before OVERFLOW: " << --min << endl;
    return 0;
} */

/* //!Pre-Post increment & decrement
#include<iostream>
using namespace std;
int main()
{
    int num = 57;
    cout<<"Display the operation of pre and post increment and decrement: ";
    cout<<"\n---------------------------------------------";
    cout<<"\nThe number is : "<<num;
    cout<<"\nAfter post increment: "<<num++<<endl;
    cout<<"After pre increment: "<<++num<<endl;
    cout<<"After increasing by 1: "<<num+1<<endl;
    cout<<"After Post decrement: "<<num--<<endl;
    cout<<"After pre decrement: "<<--num<<endl;
    cout<<"After decreasing by 1: "<<num-1<<endl;
    return 0;
} */

/* //!iomanip input output manipulation library
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double pi = 3.1416;
    cout<<"The value of pi: "<<pi<<endl;
    cout<<setw(8)<<"The value of pi 4 decimal place of total width 8: "<<"| "<<pi<<" |"<<endl;
    cout<<setw(10)<<"The value of pi 4 decimal place of total width 8: "<<"| "<<pi<<" |"<<endl;
    cout<<setfill('-');
    cout<<setw(8)<<"The value of pi 4 decimal place of total width 8: "<<"| "<<pi<<" |"<<endl;
    cout<<setw(10)<<"The value of pi 4 decimal place of total width 8: "<<"| "<<pi<<" |"<<endl;
    cout<<scientific<<"The value of pi in scientific format is: "<<pi<<endl;
    bool done = false;
    cout<<"Status in number: "<<done<<endl;
    cout<< boolalpha;
    cout<<"Status in alphabet: "<<done<<endl;
    return 0;
} */

/* //!Basic Expression
#include<iostream>
using namespace std;
int main()
{
    cout<<"Result of 1st expression is: "<<(10*2)+3<<endl;
    cout<<"Result of 2st expression is: "<<(50/5)-5<<endl;
    cout<<"Result of 3st expression is: "<<(-5+2)+15<<endl;
    cout<<"Result of 4st expression is: "<<(1*2)+1<<endl;
    return 0;
}  */

/* //!Swaping variable using third variable
#include<iostream>
using namespace std;
int main()
{
    int a{10},b{20};
    cout<<"Before swaping a = 10 and b = 20: "<<endl;
    int temp = a;
    a = b;
    b = temp;
    cout<<"After swaping a and b: "<<a<<" "<<b<<endl;
    return 0;
} */

/* //!Volume of sphere & cube
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int rad,cube;
    cout<<"Input value of radius: "<<endl;
    cin>>rad;
    cout<<"The volume of sphere: "<<(4*M_PI*pow(rad,3))/3<<endl;
        cout<<"The volume of cube: "<<pow(cube,3);
    return 0;
} */

/* //!Volume of cylinder
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float hei{0},rad{0};
    cout<<"Input the height: "<<endl;
    cin>>hei;
    cout<<"Input the radius: "<<endl;
    cin>>rad;
    cout<<"Volume of cylinder: "<<M_PI*pow(rad,2)*hei<<endl;
    return 0;
} */

/* //!Area & Perimeter of rectangle
#include<iostream>
using namespace std;
int main()
{
    int l,w;
    cout<<"Input length: "<<endl;
    cin>>l;
    cout<<"Input Width: "<<endl;
    cin>>w;
    cout<<"Area of Rectangle: "<<l*w<<endl;
    cout<<"perimeter of Rectangle: "<<2*(l+w)<<endl;
    return 0;
} */

/* //!Area of triangle
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Input 1st side of triangle: "<<endl;
    cin>>a;
    cout<<"Input 2st side of triangle: "<<endl;
    cin>>b;
    cout<<"Input 3st side of triangle: "<<endl;
    cin>>c;
    float s = (a+b+c)/2;
    cout<<"Area of triangle: "<<sqrt(s*(s-a)*(s-b)*(s-c))<<endl;
    return 0;
} */

/* //!Area & Circumference of circle
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float r;
    cout << "Input radius: " << endl;
    cin >> r;
    cout << "Area of circle: " << M_PI * pow(r, 2) << endl;
    cout << "Circumference of circle: " << 2 * M_PI * r << endl;
    return 0;
} */

/* //!Celsius to fahrenheit & fahrenheit to celsius
#include<iostream>
using namespace std;

int main()
{
    int c1,f1,c2,f2;
    cout<<"Input temperature in celsius: "<<endl;
    cin>>c1;
    f1 = (c1*9/5)+32;
    cout<<"Temperature in celsius: "<<f1<<endl;
    cout<<" ----------------------------------------------------- "<<endl;
    cout<<"Input temperature in fahrenheit: "<<endl;
    cin>>f2;
    c2 = (f2-32)*5/9;
    cout<<"Temperature in celsius: "<<c2<<endl;
    return 0;
} */

/* //!Find Third side of triangle
#include <iostream>
using namespace std;
int main()
{
    int s1, s2, s3;
    cout << "Input 1st side of triangle: " << endl;
    cin >> s1;
    cout << "Input 2st side of triangle: " << endl;
    cin >> s2;
    s3 = (s1 + s2);
    s3 = 180 - s3;
    cout << "Third side of triangle: " << s3 << endl;
    return 0;
} */

/* //!Convert temperature to kelvin to fahrenheit
#include<iostream>
using namespace std;
int main()
{
    float k1,f2;
    cout<<"Input the temperature in Kelvin: "<<endl;
    cin>>k1;
    cout<<"Temperature in Fahrenheit: "<<(k1-273.15)*1.8+32<<endl;
    cout<<"\n--------------------------------------------------------"<<endl;
    cout<<"Input the temperature in Fahrenheit: "<<endl;
    cin>>f2;
    cout<<"Temperature in Kelvin: "<<((f2-32)*5)/9+273.15<<endl;
    return 0;
} */

/* //!Conversion from kelvin to celsius
#include<iostream>
using namespace std;
int main()
{
    float k,c;
    cout<<"Input the temperature in Kelvin: "<<endl;
    cin>>k;
    cout<<"Temperature in Celsius: "<<k-273.15<<endl;
    cout<<"\n--------------------------------------------------------"<<endl;
    cout<<"Input the temperature in Celsius: "<<endl;
    cin>>c;
    cout<<"Temperature in Kelvin: "<<c+273.15<<endl;
    return 0;
} */

/* //!Area of scalene triangle
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float s1, s2, area, angle;
    cout << "Input length of side triangle: " << endl;
    cin >> s1;
    cout << "Input another side of triangle: " << endl;
    cin >> s2;
    cout << "Input the angle b/w these sides of triangle: " << endl;
    cin >> angle;

    cout << "Area of Scalene Triangle: " << s1 * s2 * sin((M_PI / 180)*angle) / 2 << endl;
    return 0;
} */

/* //!Remainder of division (mod%)
#include <iostream>
using namespace std;
int main()
{
    int divid, divisor;
    cout << "Input the dividend: " << endl;
    cin >> divid;
    cout << "Input the divisor: " << endl;
    cin >> divisor;
    cout << "The quotient of " << divid << " and " << divisor << " the division is: " << divid / divisor << endl;
    cout << "The Remainder of the division: " << divid % divisor << endl;
    return 0;
} */

/* //!Average of number
#include<iostream>
using namespace std;
int main()
{
    float averg,a,sum,n;
    cout<<"Input how many no you want to take average: "<<endl;
    cin>>n;
    for(int i=1 ;i<=n; i++)
    {
        cout<<"Input average no: "<<endl;
        cin>>a;
        sum+=a;
    }
    averg = sum/n;
    cout<<"Average of no: "<<averg<<endl;
    return 0;
} */

/* //!Outputing zero using cout
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Input single-digit no: "<<endl;
    cin>>n;
    cout<<" "<<n<<" "<<n<<" "<<n<<" "<<n<<endl;
    cout<<n<<"       "<<n<<endl;
    cout<<n<<"       "<<n<<endl;
    cout<<n<<"       "<<n<<endl;
    cout<<n<<"       "<<n<<endl;
    cout<<n<<"       "<<n<<endl;
    cout<<" "<<n<<" "<<n<<" "<<n<<" "<<n<<endl;
    return 0;
} */

/* //! Number is greater, equal, less than
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Input no: " << endl;
    cin >> n;
    if (n == 0)
        cout << n << " no is zero" << endl;
    else if (n > 0)
        cout << n << " no is positive" << endl;
    else if (n < 0)
        cout << n << " no is negtive" << endl;
    return 0;
} */

/* //! display the current date and time.  (H)
#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    time_t currentTime = time(0);
    tm *ptr = localtime(&currentTime);  //? Put mouse cursor on time_t to see information
    cout<<"Seconds: "<<ptr->tm_sec<<endl;
    cout<<"minutes: "<<ptr->tm_min<<endl;
    cout<<"hours: "<<ptr->tm_hour<<endl;
    cout<<"day of month: "<<ptr->tm_mday<<endl;
    cout<<"month of year: "<<ptr->tm_mon<<endl;
    cout<<"year: "<<ptr->tm_year+1900<<endl;  //To convert tm_year to  georgian calender  we add 1900
    cout<<"weekday: "<<ptr->tm_wday<<endl;
    cout<<"day of year: "<<ptr->tm_yday<<endl;
    cout<<"daylight savings: "<<ptr->tm_isdst<<endl;
    cout<<"Current Date: "<<__DATE__<<endl;
    cout<<"Current Time: "<<__TIME__<<endl;
} */

/* //! Print Mystery series from (1-50)  (H)

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    for (int i = 0; i < 50; i++)
    {
        if(i%3!=0)
        {
        cout<<i<<" ";
        ++i;
        }
        else if(i%2==0)
        {
        cout<<i<<" ";
        }
    }
} */
/* //! TypeCasting examples
    #include<iostream>
    #include<iomanip>
    using namespace std;
    int main()
    {
        cout<<fixed<<setprecision(1);
        cout<<"Test explicit(Programmer) type casting: "<<endl;
        int i{2},j{5};
        cout<<i/j<<endl;
        cout<<(float)i/j<<endl;
        cout<<i/(float)j<<endl;
        cout<<(float)i/(float)j<<endl;
        cout<<"Test Implicit(Programmer) type casting: "<<endl;
        double a{1},b{3};
        cout<<(int)a/(int)b<<endl;
        cout<<(int)a/(int)b<<endl;
        float n{8},m{2};
        float n1{12},m1{2};
        cout<<"int implicitly casts to double: "<<endl;
        cout<<(float)n/m<<endl;
        cout<<"int implicitly casts to double: "<<endl;
        cout<<(int)n1/(int)m1<<endl;
        return 0;
    } */

/* //! Printing table
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Input no to print table: "<<endl;
    cin>>n;
    for(int i = 1; i <= 10; i++)
    {
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
    }
    return 0;
} */

/* //! Printing American flag & C++
#include<iostream>
using namespace std;
int main()
{
    cout<<" xxxxxxx"<<endl;
    cout<<"x       x       x             x "<<endl;
    cout<<"x               x             x "<<endl;
    cout<<"x            xxxxxxx       xxxxxxx "<<endl;
    cout<<"x               x             x "<<endl;
    cout<<"x       x       x             x "<<endl;
    cout<<" xxxxxxx"<<endl;

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<" * * * * * * * =================== "<<endl;
    cout<<"  * * * * * * ==================== "<<endl;
    cout<<" * * * * * * * =================== "<<endl;
    cout<<"  * * * * * * ==================== "<<endl;
    cout<<" * * * * * * * =================== "<<endl;
    cout<<"  * * * * * * ==================== "<<endl;
    cout<<" ================================= "<<endl;
    cout<<" ================================= "<<endl;
    cout<<" ================================= "<<endl;
    cout<<" ================================= "<<endl;
    return 0;
} */

/* //! Basic string program changing name location
#include <iostream>
using namespace std;
int main()
{
    string fname, lname;
    cout << "Input first Name: " << endl;
    cin >> fname;
    cout << "Input last Name: " << endl;
    cin >> lname;
    cout << "Name in reverse: " << lname <<" "<< fname << endl;
    return 0;
} */

/* //! Find volume of cone
#include<iostream>
#include<cmath>
#define PI 3.1415926535
using namespace std;
int main()
{
    double rad{0},height{0};
    cout<<"Input cone radius: ";
    cin>>rad;
    cout<<"Input cone height: ";
    cin>>height;

    cout<<"Volume of cone: "<<1.0/3.0*PI*pow(rad,2)*height<<endl;
    return 0;
} */

/* //! sum of all even and odd number in array;   (H)
#include<iostream>
using namespace std;
int main()
{
    int array[8] = {1,2,3,4,5,6,7,8};
    int Evensum{0},Oddsum{0};
    for (int i = 0; i <= 7; ++i)
    {
        if(array[i] % 2 == 0)
            Evensum += array[i];
        else
        Oddsum += array[i];
    }
    cout<<"Sum of even & odd number: "<<Evensum<<" "<<Oddsum;
    return 0;
} */

/* //! swaps two variable without using third variable (H)
#include<iostream>
using namespace std;
int main()
{
    int a{25},b{20};
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"After swaping value of a: "<<a<<endl;
    cout<<"After swaping value of b: "<<b<<endl;
    return 0;
} */

/* //! Print ASCII value of character
#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Input character for ASCII code: ";
    cin>>a;
    cout<<"ASCII value of character: "<<(int)a<<endl;  //? TYPECAST the value of charcter into integer
    return 0;
} */

/* //! Convert centimeter number into meter & kilometer
#include<iostream>
using namespace std;
int main()
{
    int centimeter, meter, kilometer;
    cout<<"Input centimeter value: ";
    cin>>centimeter;
    cout<<"Centimeter to meter: "<<centimeter/100<<endl;
    cout<<"Centimeter to meter: "<<centimeter*0.00001<<endl;
    return 0;
} */

/* //!Area of Equilateral triangle
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float side{0},Area{0};
    cout<<"Input value of side of equilateral triangle: "<<endl;
    cin>>side;
    Area = (sqrt(3) * pow(side,2)) / 4;
    cout<<"Area of equilateral triangle: "<<Area;
    return 0;
} */

/* //! Enter P, T, R and calculate Simple Interest
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int p{0},t{0},r{0}, Sinterest{0},compoundInterest{0},Tamount{0};
    cout<<"Input Principle(P): ";
    cin>>p;
    cout<<"Input Rate of Interest(R): ";
    cin>>r;
    cout<<"Input Time(T): ";
    cin>>t;
    Sinterest = (p*t*r) / 100;
    cout<<"Simple intereest for the amount "<<p<<" for "<<t<<" is: "<<Sinterest<<endl;
    return 0;
} */

/* //! Enter P, T, R and calculate Compound interest
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float p{0},t{0},r{0},compoundInterest{0},Tamount{0};
    cout<<"Input Principle(P): ";
    cin>>p;
    cout<<"Input Rate of Interest(R): ";
    cin>>r;
    cout<<"Input Time(T): ";
    cin>>t;
    compoundInterest = p * pow((1+r/100),t) - p;
    Tamount = p * pow((1+ r/100),t);
    cout<<"The Interest after compounded for the amount " <<p<< " for " << t <<" years is: "<<compoundInterest<<endl;
    cout<<"The total amount after compounded for the amount " <<p<< " for " << t <<" years is: "<<Tamount<<endl;
    return 0;
} */

/* //! String manipulation
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s = "welcome,w3resources";
    char c[] = "welcome,w3resources";
    cout<<"The string: "<<s<<endl;
    cout<<"The length of string: "<<s.length()<<endl;
    cout<<"The char at index 1 of string: "<<s.at(1)<<endl;
    cout<<"The char at index 1 of string: "<<c[1]<<endl;
    cout<<"Is string empty: "<<s.empty()<<endl;
    cout<<"Retriving sub-string from string: "<<s.substr(3,4)<<endl;
    cout<<"Replacing sub-string from string: "<<s.replace(3,4,"went")<<endl;
    cout<<"Append string end at last of string: "<<s.append(" end")<<endl;
    cout<<"Inserting 3rd position from string: "<<s.insert(3," inse rt ")<<endl;
    cout<<"The new string is: "<<s<<endl;
    cout<<"Input a sentence: ";
    getline(cin,s);      //?getline(cin,string-name) is used to get multiple string as input
    cout<<s<<endl;

    return 0;
} */

/* //! Area of hexagon
#include<iostream>
#include<cmath>
#define PI 3.141592653589
using namespace std;
int main()
{
    int Hexagoneside{0}, PolygoneSide{0},Polygonelength{0};
    cout<<"Input the side of hexagone: ";
    cin>>Hexagoneside;
    cout<<"Input the side of Polygon: ";
    cin>>PolygoneSide;
    cout<<"Input the length of polygon: ";
    cin>>Polygonelength;
    cout<<"Area of hexagon: "<<(3*sqrt(3)*pow(Hexagoneside,2) )/2<<endl;
    cout<<"Area of polygone: "<<(PolygoneSide*pow(Polygonelength,2))/(4*tan(PI/PolygoneSide))<<endl;
    return 0;
} */

/* //! Find distance between two points of surface of earth
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double d{0},la1{0},lo1{0},la2{0},lo2{0},r{0.01745327},er{6371.01};
    cout<<"Input latitude of coordinate 1: ";
    cin>>la1;
    cout<<"Input longitude of coordinate 1: ";
    cin>>lo1;
    cout<<"Input latitude of coordinate 2: ";
    cin>>la2;
    cout<<"Input longitude of coordinate 2: ";
    cin>>lo2;
    la1 *= r;
    la2 *= r;
    lo1 *= r;
    lo2 *= r;
    d = er * acos((sin(la1) * sin(la2)) + (cos(la1) * cos(la2) * cos(lo1 - lo2)));
    cout<<"The distance between those points is: "<<d;
    return 0;
} */

/* //! Add two binary numbers
#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
long b1{0}, b2{0},digit,i,sum{0},rem{0};
int binaryArray[30];
int BinaryTOdecimal(long binary)
{
    digit = 0, i = 0;
    while (binary >= 1)
    {
        digit = digit + binary % 10 * pow(2, i);
        binary /= 10;
        ++i;
    }
    return digit;
}
void DecimalTObinary(int decimal)
{
    i = 0;
    while(decimal > 0)
    {
        binaryArray[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    for(int j = i-1; j>=0; j--)
    cout<<binaryArray[j];
}
int main()
{
    cout << "Input binary number(0,1): ";
    cin >> b1;
    cout << "Input 2nd binary number(0,1): ";
    cin >> b2;
    cout<<"binaryTODecimal: "<<BinaryTOdecimal(b1)<<endl;
    cout<<"binaryTODecimal: "<<BinaryTOdecimal(b1)<<endl;
    sum = BinaryTOdecimal(b1) + BinaryTOdecimal(b2);
    cout<<"Addition(decimal): "<<sum<<endl;
    DecimalTObinary(sum);
    return 0;
} */

//! Swap first and last digit of number
#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    return 0;
}

/* //!program that reads the integer n and prints a twin prime that has the maximum size among twin primes less than or equal to n.
#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    return 0;
} */

/* //! three highest number in decending order
#include <iostream>
using namespace std;
int main()
{
    return 0;
} */


/* //! The sum of the two given integers and count the number of digits in the sum value.
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Input first integer: ";
    cin>>a;
    cout<<"Input second integer: ";
    cin>>b;
    c = a + b;
    cout<<(int)log10(c)+1;
    return 0;
} */


/* //!check length of three sides forms a right triangle.
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Input first side: ";
    cin>>a;
    cout<<"Input second side: ";
    cin>>b;
    cout<<"Input Third side: ";
    cin>>c;
    int lvalue = pow(a,2)+pow(b,2);
    if(lvalue == pow(c,2))
    {
        cout<<"Right triangle";
    }
    else
    cout<<"Not Right triangle";
    return 0;
} */

/* //! Add all the numbers from 1 to given number
#include<iostream>
using namespace std;
int main()
{
    int n{0},sum{0},i{1};
    cout<<"Input integer: ";
    cin>>n;
    while (i <= n)
    {
        sum += i;
        ++i;
    }
    cout<<sum;
    return 0;
} */

/* //! central coordinate and radius of a circumscribed circle of a triangle. This circle is created from three points on the plane surface.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{

    return 0;
} */

/* //! Program reads seven numbers and sorts them in descending order.
#include<iostream>
using namespace std;
int main()
{

    return 0;
} */

/* //! program that reads the integer n and prints its factorial.
#include<iostream>
using namespace std;
int main()
{

    return 0;
} */

/* //! program replace all the lower-case into capital letters.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    return 0;
} */


/* //! Sequence of integers and prints the mode values of the sequence. The number of integers >= to 1 and <= 100.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    return 0;
} */


/* //! program reads n digits chosen from 0 to 9 and counts the number of combinations where the sum of the digits equals the given number. Do not use the same digits in a combination.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    return 0;
} */


/* //!program that accepts the sales unit price and sales quantity of various items and computes the total sales amount and the average sales quantity. All input values must be >= to 0 and <=> 1,000. the number of pairs of sales unit and sales quantity does not exceed 100. If a fraction occurs in the average of the sales quantity, round to the first decimal place.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    return 0;
} */


/* //!program that accepts various numbers and computes the difference between the highest number and the lowest number. All input numbers should be real numbers between 0 and 1,000,000. The output (real numbers) may include an error of 0.01 or less.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    return 0;
} */


/* //!program find sum of number of prime numbers. n = 7, s = 2 + 3 + 5 + 7 + 11 + 13 + 17 = 58.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    return 0;
} */


/* //!An even number of 4 or more can be represented by the sum of two prime numbers. This is called the Goldbach expectation, and it is confirmed that it is correct up to a considerable number by computer calculation. For example, 10 can be expressed as the sum of two prime numbers 7 + 3, 5 + 5. Write a C++ program that accepts an integer (n) from the user and outputs the number of combinations that express n as the sum of two prime numbers.Note: n should be greater than or equal to 4 and less than or equal to 50,000.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    return 0;
} */


/* //!There are four different points on a plane: A(x1, y1), B(x2, y2), C(x3, y3) and D(x4, y4). Write a C++ program to check whether two straight lines AB and CD are orthogonal or not. Input:0 6,5 6,3 8,3 2 yes
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    return 0;
} */


/* //!program to sum all positive integers in a sentence. There are 12 chairs, 15 desks, 1 blackboard and 2 fans.Output: 30
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    return 0;
} */


/* //!program to display all the leap years between two given years. If there is no leap year in the given period,display a suitable message.Note: Range of the two given years: ( 0 < year1 = year2 < 3,000).
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    return 0;
} */


/* //!program that accepts n different numbers (0 to 100) as well as an integer s which is equal to the sum of the n different numbers.Your job is to find the number of combinations of n numbers and the same number cannot be used for one combination.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    return 0;
} */


/* //!program that replaces all the words "dog" with "cat". "The quick brown fox jumps over the lazy dog" .Assume that number of characters in a text <= 1000.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    return 0;
} */


/* //! program that reads a list of pairs of a word and a page number, and prints the word and a list of the corresponding page numbers.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    return 0;
} */


/* //! program to convert a given number into hours and minutes. Separate the number of hours and minutes with a colon. if a given number is 67 the output should be 1:7
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    return 0;
} */

/* //! program to check whether the sequence of the numbers in a given array is an "Arithmetic" or "Geometric" sequence. Return -1 if the sequence is not "Arithmetic" or "Geometric".In mathematics, an arithmetic progression (AP) or arithmetic sequence is a sequence of numbers such that the difference between the consecutive terms is constant. Difference here means the second minus the first. For instance, the sequence 5, 7, 9, 11, 13, 15, . . . is an arithmetic progression with common difference of 2.In mathematics, a geometric progression, also known as a geometric sequence, is a sequence of numbers where each term after the first is found by multiplying the previous one by a fixed, non-zero number called the common ratio. For example, the sequence 2, 6, 18, 54, ... is a geometric progression with common ratio 3. Similarly 10, 5, 2.5, 1.25, ... is a geometric sequence with common ratio 1/2.
Example:
Sample Input: int nums1[] = { 1, 3, 5, 7 }
Sample Output: Arithmetic sequence
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    return 0;
} */

/* //! program to find the total number of minutes between two given times (formatted with a colon and am or pm).Sample Input: Minutes between 12:01AM to 12:00PM: Sample Output: Minutes between 12:01AM to 12:00PM: 1439
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    return 0;
} */

/* //! program to add up all the digits between two given integers. Add all the digits between 11 and 16. Add up all the digits between 39 and 41 is: 21
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    return 0;
} */

