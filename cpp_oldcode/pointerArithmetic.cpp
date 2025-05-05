// Pointer Arithmetic five operation you performed on pointer.
//  1. p++; increment of pointer address
//  2. p--; decrement of pointer address
//  3. p = p + 2; any constant you can add like 2
//  4. p = p - 5; any constant you can subtract like 5
//  5. d = q - p;

// //  1. p++; increment of pointer address
// #include <iostream>
// using namespace std;
// int main()
// {
//     int A[5] = {1, 2, 3, 4, 5};
//     int *p = A;
//     cout << "Array Name value" << *p << endl;
//     p++;                                                  // Increment pointer means pointer memeory address will move forward
//     cout << "After increment of pointer: " << *p << endl; // So pointer will move to next element which is index 2;
//     p--;                                                  //
//     cout << "After decrement of pointer memory address: " << *p << endl;
//     return 0;
// }

//
//
//
//  3. p = p + 2; any constant you can add like 2
#include <iostream>
using namespace std;
int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    int *i = A;
    cout << "Pointer value is: " << *i << endl;
    i += 2;
    cout << "After adding constant in pointer: " << *i << endl;
    i -= 2;
    cout << "After subtracting constant by pointer: " << *i << endl;
    return 0;
}

//
//
//
//
// 5. d = q - p
// #include <iostream>
// using namespace std;
// int main()
// {
//     int A[5] = {1, 2, 3, 4, 5};         //Array element of 5;
//     int *k = A;                         //Array name taking as memory address as first
//     int *l = &A[5];                    //Pointer taking address of index 5 value
//     int d = l - k;                     //calculating distance b/w two pointers
//     cout << "Two array distance of address using pointer: " << d;
//     return 0;
// }