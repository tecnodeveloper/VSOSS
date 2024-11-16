// function bitwise operator using switch break 
#include <iostream>
using namespace std;
int Bitwise()
{
	int a = 6, b = 2;
	int c = a & b ;              // AND operator(&) when both bits are 1 than the Output is 1 otherwise it will be zero 
    cout<< "Your Output :"<<c<<"\n" ;
    
    int w = 6, q = 2;
	int e = w | q ;              // OR operator(|) when only one bits is 1 than the Output is 1 otherwise if there is no 1 bit in both then it will be zero 
    cout<< "Your Output :"<<e<<"\n" ;
    
    int r = 6, t = 2;
	int y = ~t ;              // Not operator(&) It applies on only one bit if the bit is 1 then it will reverse it and the output is 0
    cout<< "Your Output :"<<y<<"\n" ;
    
    	int u = 6, i = 2;
	int o = u ^ i ;              // XOR operator(^) if there is only 1 bit in both bits the output is 0 otherwise the output is 1 
    cout<< "Your Output :"<<o<<"\n" ;
    
    char s = 20, p;
	p = s << 2 ;              // Left shift operator(<<) multiple the number with 2 or will move one bit from left to right 
    cout<< "Your Output :" <<p <<"\n" ;
    
    int f = 20, g;
	g = f >> 1 ;              // Right operator(>>) or it will divide by 2 the number will move one bit from right to left  
    cout<< "Your Output :"<<g <<"\n";
}
int main()
{
	Bitwise();
}
