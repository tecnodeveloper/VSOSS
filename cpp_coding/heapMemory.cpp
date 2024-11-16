// Heap Memory Concept
#include <iostream>
using namespace std;
int main()
{
    int A[5] = {1, 2, 3, 4, 5}; // Created in stack memory
    int *p;                     // This is also created in stack but when we write new operator then the dynamic memory is allocated
    p = new int[5];             // Dynamic memory is allocated for 5 array element
    A[2] = 13;
    p[2] = 12;
    cout << "Stack Memory array element of index 2: " << A[2] << endl;
    cout << "Heap Memory array element of index 2: " << p[2] << endl;

    delete[] p;  // Deallocating heap memory
    p = nullptr; // Pointer pointing toward 0
    return 0;
}




// //Stack Memory(Once aaray size can be created in stack youcan't change the size of array element)
// #include<iostream>
// using namespace std;
// int main()
// {
//     int size;
//     cout<<"Enter number of elements: ";
//     cin>>size;
//     int A[size];
//     cout<<sizeof A<<endl;
//     return 0;
// }



// //Heap Memory (Advantage of using heap over stack is that you can dynamically change the size of array element in program during runtime

// #include<iostream>
// using namespace std;
// int main()
// {
//     int *p = new int[20];


//     delete [p];        //Otherwise there is memory leak if we not write delete []p;
//     p = new int[40];    //Now bigger size of element is created during runtime
//     return 0;
// }