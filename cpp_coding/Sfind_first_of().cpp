// s.find_first_of(char) or (string) is used to find the occurence from left side character in string
// s.find_last_of(char) or (string) is used to find the occurence from last(right side) digit character in string
#include <iostream>
using namespace std;
int main()
{
    string s = "Hello GoodBye";
    // from left side
    cout << s.find_first_of('o') << endl;
    // from right side
    cout << s.find_last_of('o') << endl;
    // finding string
    cout << s.find_first_of("Go") << endl;
    return 0;
}