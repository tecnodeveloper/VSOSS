//Program for finding factors of first two integer are factor of second.
#include <iostream>
using namespace std;
bool areFactors(int int1, int int2, int int3) {
    // Check if int1 and int2 are factors of int3
    return (int3 % int1 == 0 && int3 % int2 == 0);
}

int main() {
    // Input three integers from the user
    int int1, int2, int3;
    
    std::cout << "Enter the first integer: ";
    std::cin >> int1;

    std::cout << "Enter the second integer: ";
    std::cin >> int2;

    std::cout << "Enter the third integer: ";
    std::cin >> int3;

    // Check and print the result
    if (areFactors(int1, int2, int3)) {
        std::cout << int1 << " and " << int2 << " are factors of " << int3 << "." << std::endl;
    } else {
        std::cout << int1 << " and " << int2 << " are not factors of " << int3 << "." << std::endl;
    }

    return 0;
}

