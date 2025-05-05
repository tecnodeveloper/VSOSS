// Creating Array using Dynamic memory
#include <iostream>
using namespace std;
int main()
{
    int *p = new int[5];
    cout << "Enter array element that store in dynamic memory allocation: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> *(p + i);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << *(p + i) << " "; // Array element store in dynamic memory using pointer:
    }

    delete[] p; // Deallocating array element in dynamic allocation;

    return 0;
}