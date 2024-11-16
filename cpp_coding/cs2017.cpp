/* // guessing the game
#include <iostream>
using namespace std;
int main()
{
    int mynum{1};
    char guess = 'c', z; // guessing the character
    cout<<"You have 5 chances to guess the character\n";
    do
    {
        cout << "Please enter charcter(a-z) for guessing ";
        cin >> z;
        if (guess == z)
        {
            cout << "\nYou won guess is correct: ";
            exit(0);  //exit(0) is used to terminate the program but break is used to break the loop function.
        }
        else
            ++mynum; // updation of value after every loop run
    } while (mynum <= 5); // guess can be limit of 5
    cout << "guess is " << guess << " you lose.";

    return 0;
} */

/* // For loop table practice
#include <iostream>
using namespace std;
int main()
{
    int table;
    cout << "Enter no to print its table: ";
    cin >> table;
    for (int i = 1; i <= 10; ++i)  cout << table << " X " << i << " = " << table * i << endl;

    return 0;
} */

// Sum up square of n integer
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int no, sum{0};
    cout << "Enter no to sum (1 to n) of square: ";
    cin >> no;
    for (int i = 1; i <= no; ++i)
    {
        sum += pow(i,2);
    }
    cout << "Sum of square number: " << sum;
    return 0;
}
