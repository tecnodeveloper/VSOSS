/* //OOP concept
#include<iostream>
using namespace std;
class Myclass{
    public:
    Myclass()         // ! jab hum na object banya toh constructor automatically call itself
    {
        cout<<"Hello OOp";
    }
};
int main()
{
    Myclass c1;
    return 0;
} */

#include<iostream>
using namespace std;
int main()
{
    char a[100] = {};
    int count;
    cout<<"Enter your name: ";
    cin>>a;
    for (int i = 0; a < " "; i++)
    {
        count++;
    }
    for (int i = 0; count < i; count=-1)
    {
        count<<a[i];
        if(count == 0)
        {
            break;
        }
    }
    return 0;
}