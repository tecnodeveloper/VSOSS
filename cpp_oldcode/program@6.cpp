//overflow concept  
//range of character data type is ( -128 to 127 ) its loop if overflow occur if the value will overflow than it will be move clockwise/anticlockwise just like clock after 12 the digit 1 will come not 13 also anticlockwise before 1 there will not come 0 the 12 will come 
#include <iostream>
using namespace std;
int main()
{
char a=128;
 cout<<(int)a<<endl;
char b=127;
 b++;
 cout<<(int)b<<endl;
char c=-129;
 cout<<(int)c<<endl;
char d=-128;
 d--;
 cout<<(int)d<<endl;
int e=INT_MAX;
 e++;
 cout<<(int)e<<endl;
return 0;
}
