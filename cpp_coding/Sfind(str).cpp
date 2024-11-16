// s.find(str) is used to find the occurence of substring in main string if is found it will give index
#include<iostream>
using namespace std;
int main()
{	
    string s = "Hello How are you";
    // i wrote condition here if index is between 0 to s.length() then print index otherwise say string not found
    if (s.find('H') <= s.length() && s.find('H')<= 0)
    {
    cout<<"Find from left side: "<<s.find('H')<<endl;
    //From rigth hand side
    cout<<"Find from rigth side: "<<s.rfind('H')<<endl;
	}
    else
    cout<<"String is not found: "<<endl;
    return 0;
}