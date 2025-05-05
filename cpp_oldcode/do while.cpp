//Program for input n times iterations using do while loop(it will execute first than check conditions do first and than check condition)
#include<iostream>
using namespace std;
int main()
{
  int n{0}, i{0};
  cout<<"Input n times iteration: ";
  cin>>n;
  do                               //do first and than check condition while();
  {
  	cout<<"I love y Allah and his loveable prophet(saw)"<<endl;    //do will execute this statement one time 
  	i++;              
  }
  while(i < n);                    //Don't forget to add semicolon at the end of while after do 
}

