// Converting string upper to lower case string
#include <iostream>
using namespace std;
int main()
{
    string s = "Welcome7865";
    int i = 0;
    {
            for (i = 0; s[i] != '\0'; i++)
            {
                //65 to 95 letters are lower
                if (s[i] >= 65 && s[i] <= 95)
                {
                s[i] = s[i] + 32;
                }
             cout << s[i];
            }
    }

    return 0;
}