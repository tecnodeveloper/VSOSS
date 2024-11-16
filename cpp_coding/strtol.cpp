// strtol(string to long int) converet char array into integer and you can perform arithmetic operation also
// strtof(string to float) converet char array into float and you can perform arithmetic
#include <iostream>
using namespace std;
int main()
{
    char s1[20] = "245";   // string integer
    char s2[20] = "35.90"; // string float

    long int x = strtol(s1,NULL,10);
    float y = strtof(s2, NULL);
    x += 10;               //Arithmetic operation on strtol
    y += 10;               //Arithmetic operation on strtof
    cout << x << endl;
    cout << y << endl;
    return 0;
}