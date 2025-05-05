//typedef is a keyword that is used when the variable name is like r1,r2,r3 difficult to remember but you can simply use your own name of data type by using existing data types 
//typedef existing-data-type new-data-type ;     if you want to use like global scope you have to assign it outside the block of code(function) if you assign typedef in the function then it will be local variable scope and works as only for this function where you declare that variable 
 //rollno become datatype that is created by programmer it cannot make my program efficient but it will make my program readability .
 #include <iostream>
 using namespace std;
 typedef int rollno;      // these datatype are created globle scope so you can access datatype anywhere in your program if you write in the piece of block of code(function) than it will be allow only for inside not ouside of function.
 typedef float marks;
 int main()
 {
 	rollno r1,r2,r3;
 	marks m1,m2,m3;
 	cout<<"Enter the mark of rollno :";
 	cin >> m1;
 	cout<<"Marks are :"<< m1;
 	
 	
 }
