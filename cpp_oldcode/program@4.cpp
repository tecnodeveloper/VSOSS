/*
 Increment / Decrement Operator 
y = ++a ; pre Increment opertor           First Increment than assign the value to y
y = a++ ; post Increment operator         First use variable than Increment the variable 
Output will be same for both but when we use them along with variables the output will be different 
  y = y + 1;
  y += 1 ;  compound assignment operator
  y = ++y           
  Don't use multiple increment / decrement operator in single expression the compiler will give you unexpected result 
  */
  #include<iostream> 
  using namespace std;
  int preIncrement()
  {
  	int x = 5, y = 10, z;
  	z = ++x * y ;                          //preIncrement 
  cout<<"Your Output : "<< z <<"\n "<< endl;
  }
  int postIncrement()
  {
  	int x = 5, y = 10, z;
  	z = x++ * y ;                         //postIncrement 
  	cout<<"Your Output : "<< z<<"\n "<< endl ;
  }
  int preDecrement()
  {
  	int x = 5, y = 10, z;
  	z = --x * y ;                          //preDecrement 
  cout<<"Your Output : "<< z <<"\n "<< endl;
  }
  int postDecrement()
  {
  	int x = 5, y = 10, z;
  	z = x-- * y ;                         //postDecrement
  	cout<<"Your Output : "<< z<<"\n "<< endl ;
  }
  int main()
  {
  	preIncrement();
  	postIncrement();
  	preDecrement();
  	postDecrement();
  }
  

