/*
    % by 10 gives you last digit of number
    % by 100 gives you last two digit of number
    % by 10 remove last digit of number
    / by 100 remove last two digit of number
*/
#include <iostream>
using namespace std;
int main()
{
    short num, digit, orginal;
    cout << "Input four-digit for reverse: ";
    cin >> num; // 7531
    cout << "Reverse of number: ";
    // it gives you last digit separate       1
    digit = num % 10;
    // print last digit first                  1,
    cout << digit << ",";
    // remove last digit from number           753
    num /= 10;
    // Doing steps repeatedly upto last digit to print        3
    digit = num % 10;
    // printing last digit                                    1, 3,
    cout << digit << ",";
    // division by 10 will remove last digit                  75
    num /= 10;
    //% by 10 gives you separate last digit                  5
    digit = num % 10;
    // print                                                  1, 3, 5,
    cout << digit << ",";
    // division by 10 will remove last digit                  7
    num /= 10;
    cout << num << endl; // 1, 3, 5, 7
    return 0;
}