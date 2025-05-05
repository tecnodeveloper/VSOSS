//Overflow 
//Range of char = -128 to 127;
#include<iostream>
using namespace std;
int main()
{
	char x = 127;
	++x;
	cout<<"After overflow the value of x becomes: "<<(int)x;          //Typing Casting concept;
	return 0;
}

