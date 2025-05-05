// count words letters and vovels(a,e,i,o,u || A,E,I,O,U)
#include <iostream>
using namespace std;
int main()
{ 
    //it should not count two space togeather
    string s = "how        Many Words";
    // We have intialized with 1 bcz if only one word is written then the else if will not count any space
    int space{1}, vowels{0}, consonent{0};
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            vowels++;
        }
        else if (s[i] == ' ' && s[i-1] != ' ' && s[i] != 0)
        {
            space++;
        }
        //Consonent donot count other letter like numeric and special words
        else if(s[i] >= 65 && s[i] <= 122)
        {
        consonent++;
        }
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Words: " << space << endl;
    cout << "Letters: " << consonent << endl;

    return 0;
}