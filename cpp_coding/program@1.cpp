 // finding area of circle 
#include <iostream>
#include <cmath>
using namespace std;
typedef float radius ;
int AreaofCircle()
{
	radius r;
	cout<<"Enter the value of r : ";
	cin >> r ;
	float area = 3.14f * pow(r,2) ;                //if you write float value then the compiler take it defualt as double you have to write it f with the value of float so compiler does't take it as double
	cout << "Area of Circle :"<< area ;
	return 0;
}
int main()
{
	AreaofCircle();
}