// practice the compound assignment operator.
#include <iostream>
using namespace std;
int main()
{
	int comp = 15;             //value of variable comp is 15 
	comp += 5;                 //comp variable add 5 in comp and new value of comp assignment operator is stored after comp = comp + 5 = 20
    cout<<"Compound assignment operator after the value comp += 5 :"<< comp<<endl ;
    comp -= 5;
    cout<<"Compound assignment operator after the value comp -= 5 :"<< comp <<endl;
    comp *= 2;
    cout<<"Compound assignment operator after the value comp *= :"<< comp<<endl;
    comp /= 10;
    cout<<"Compound assignment operator after the value comp /= 5 :"<< comp <<endl;
    comp %= 5;
    cout<<"Compound assignment operator after the value comp %= 5 :"<< comp<<endl ;
    return 0;
}
