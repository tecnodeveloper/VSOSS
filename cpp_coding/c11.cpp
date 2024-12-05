// //this-> pointer is used for memeber function only it is not used by friend function bcz they are not member
// #include <iostream>
// using namespace std;
// class Rectangle
// {
// private:
//     int length;
//     int breath;

// public:
//     Rectangle(int length, int breath)
//     {
//         this->length = length;
//         this->breath = breath;
//     }

//     void setLength(int l)
//     {
//         if (l > 0)
//             length = l;
//         else
//             length = 0;
//     }
//     void setBreath(int b)
//     {
//         if (b > 0)
//             breath = b;
//         else
//             breath = 0;
//     }
//     int getLength()
//     {
//         return length;
//     }
//     int getBreath()
//     {
//         return breath;
//     }
//     int area()
//     {
//         return length * breath;
//     }
//     int perimeter()
//     {
//         return 2 * (length + breath);
//     }
// };
// int main()
// {
//     Rectangle r1(10,5);
//     //Copy constructor copy the values of r1 to r2
//     Rectangle r2(r1);
//     cout<<r2.area();

//     return 0;

/* #include <iostream>
using namespace std;
int main()
{
    int count{0},i{0};
    char name[100];
    cout << "Please enter your name: ";
    cin >> name;
    while(name[i] != '\0')
    {
        i++;
        count++;
    }
    for(int i = '\0'; i < name[count]; count--)
    {
        cout<<name[count];
        if(count == 0)
        {
            break;;
        }
    }

    return 0;
} */

/* #include<iostream>
using namespace std;
void getvalues(int[], int);
int main()
{
    int num[10],i{0};
    cout<<"\nThe array is populated after the function call: ";
    for(int i = 0; i < 10; i++)
    {
        cout<<num[i]<<endl;
    }
    getvalues(num,10);
    cout<<"\nThe array is populated after the function call: ";     //changes of call by reference of array by defualt.
    for(int i = 0; i < 10; i++)
    {
        cout<<num[i]<<endl;
    }
    return 0;
}
void getvalues(int a[], int s)
{
    for(int i = 0; i < s; i++)
    {
        a[i] = i;
    }
} */

#include<iostream>
using namespace std;
int main()
{
    const int maxRow = 2;
    const int maxCol = 3;
    int matrix[2][3];
    for(int row = 0; row < maxRow; row++)
    {
        for(int col = 0; col < maxCol; col++)
        {
            cout<<"Please enter value of position: "<<row<<" "<<col<<" ";
            cin>>matrix[row][col];
        }
    }
    for(int row = 0; row < maxRow; row++)
    {
        for(int col = 0; col < maxCol; col++)
        {
            cout<<matrix[row][col]<<" ";
        }
    }
    return 0;
}