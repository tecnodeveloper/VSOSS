//Displaying n number from 1 to 100 times using while loop(check condition first than execute statement)
#include<iostream>
using namespace std;
int main()
{
  int i{0},n{0};              //intialize i as 0 
  cout<<i<<endl;
  cout<<"Input while loop value where till the loop will run: ";
  cin>>n;
  
  while (i <= n)       //Than while loop will check condition is true than it will check whether condition is true or not if condition is not true it will not execute any statement body
  
{
	cout<<"I Love Y baby \n"<<i<<endl; 
	i++;            //i=i+1
}
return 0;
}
