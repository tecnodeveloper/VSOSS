// Defualt value jo intialize value kara den declare ka waqat (optional)
// Formal argument ki koi value nahi hoti yeh value copy karta hai actual argument sa aur operation perform karta
// Actual argument jo main() ma real variable ko value assign ki jate hai
#include <iostream>
using namespace std;
int num(int x) // Formal argument & parameter
{
    x = x + 50;
    cout << x << endl;
    return x;
}
int main()
{
    int a = 100;
    num(a); // a is actual argument & parameter
    cout << num(a) << endl;
    return 0;
}