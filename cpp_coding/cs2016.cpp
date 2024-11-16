 //program to add 1 to 1000 number while loop
#include<iostream>
using namespace std;
int main()
{
    int num{0}, n{1},sum{0};
    cout<<"Input number for sum: ";
    cin>>num;
    while (n <= num)
    {
        sum += n;            //take the sum bucket add the value and store or modify the value in bucket
        ++n;                //Increment the value of n everytime up condition is false
    }
    cout<<"The sum of "<<num<<" is: "<<sum;
    return 0;
}

/* //even number addition
#include<iostream>
using namespace std;
int main()
{
    int num{0}, n{1},sum{0};              //creating three var 1 for taking input 2 for iteration 3 for addition value
    cout<<"Input number for even sum: ";
    cin>>num;
    while (n <= num) //condition if (1 <= jo hum number input)
    {
        if(n % 2 == 0)   //n needs to be mod by 2 bcz its an iteration which value is increased in loop
        {
            sum += n;
        }
        ++n;             //Incrementing value by 1 outside the loop becase inside the if-else condition needs to be true for incrementing so we need to increment everytime loop runs condition does't run for odd number
    }
    cout<<"The sum of even numbers in "<<num<<" is: "<<sum;
    return 0;
} */

/* //even number addition
#include<iostream>
using namespace std;
int main()
{
    int num{0}, n{1},sum{0};              //creating three var 1 for taking input 2 for iteration 3 for addition value
    cout<<"Input number for odd sum: ";
    cin>>num;
    while (n <= num) //condition if (1 <= jo hum number input)
    {
        if(n % 2 != 0)   //n needs to be mod by 2 bcz its an iteration which value is increased in loop
        {
            sum += n;
        }
        ++n;             //Incrementing value by 1 outside the loop becase inside the if-else condition needs to be true for incrementing so we need to increment everytime loop runs condition does't run for odd number
    }
    cout<<"The sum of odd numbers in "<<num<<" is: "<<sum;
    return 0;
} */

/* // For even & odd number addition
#include <iostream>
using namespace std;
int main()
{
    int num{0}, n{1}, sum{0}, odd{0}; // creating three var 1 for taking input 2 for iteration 3 for addition value
    cout << "Input number for even & odd sum: ";
    cin >> num;
    while (n <= num) // condition if (1 <= jo hum number input)
    {
        if (n % 2 == 0) // n needs to be mod by 2 bcz its an iteration which value is increased in loop
        {
            sum += n;
        }
        else
        {
            odd += n;
        }
        ++n; // Incrementing value by 1 outside the loop becase inside the if-else condition needs to be true for incrementing so we need to increment everytime loop runs condition does't run for odd number
    }
    cout << "\nThe sum of even numbers in " << num << " is: " << sum << endl;
    cout << "\nThe sum of odd numbers in " << num << " is: " << odd << endl;
    return 0;
} */

/* //fictorial program using while loop
#include<iostream>
using namespace std;
int main()
{
    int factorial{1}, number{1}, n{0};              
    cout<<"Input number to find factorial: ";
    cin>>number;
    while (number > 1)
    {
        factorial *= number;
        number -= 1;
    }
    cout<<"The factorial of number "<<number<<" is: "<<factorial;
    return 0;
} */

