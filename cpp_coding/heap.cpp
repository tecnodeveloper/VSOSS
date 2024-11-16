//Heap Memory vs Stack Memory 
#include<iostream>
using namespace std;
int main()
{
	int A[5]={1,2,3,4,5};         //created in stack memory
	
	int *p;                       //creating pointer to access heap memory
	p = new int[5];
	
	A[2] = 15;
	
	p[2] = 15;
	
	cout<<p[2]<<endl;             //created in heap memory
  	cout<<A[2]<<endl;             //created in stack memory
  	
  	delete []p;                   //Deallocating heap memory
  	
  	return 0;
}

