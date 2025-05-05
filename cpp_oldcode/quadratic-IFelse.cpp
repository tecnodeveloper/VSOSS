// Quadratic checking roots by if else
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    double dis, imag, real;
    cout << "Enter value of a, b and c: " << endl;
    cin >> a >> b >> c;
    dis = pow(b,2) - (4 * a * c);
    cout << "Discrimant: " << dis << endl;

    if (dis == 0)
    {
        cout << "Roots are real and equal " << (-b / (2.0 * a)) << endl;
    }
    else if (dis > 0)
    {
        cout << "Roots are real and unequal " << endl;
        cout << (-b + sqrt(dis)) / (2.0 * a)<<endl;
        cout << (-b - sqrt(dis)) / (2.0 * a)<<endl;
    }
    else
    {
        real = -b / (2.0*a);
        imag = sqrt(-dis)/(2.0*a);
        cout << "Roots are imaginary " << endl;
        cout << real<<" + "<<imag<<"i"<<endl;
        cout << real<<" - "<<imag<<"i"<<endl;

        
    }

    return 0;
}
