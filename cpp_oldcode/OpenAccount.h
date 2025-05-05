#if !defined(OpenAccount_H)
#define OpenAccount_H

#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::string;
class OpenAccount{
    public:
/*         OpenAccount(string fn,string ln) : firstName(fn), LastName(ln)
        {

        } */
        void getName(string name)
        {
            if(name.length() <= 20)
            {
                Name = name;
            }
            else
                cout<<"Name is exceeded the length of 20";
        }
        void getPassword(string pswd)
        {
            if(pswd.length() <= 80)
            {
                password = pswd;
            }
            else
                cout<<"password is too long";
        }
        void getGmail(string gml)
        {
            if(gml.length() <= 20)
            {
                gmail = gml;
            }
            else
                cout<<"gmail is incorrect";
        }
        void setDisplay()
        {
            cout<<"Your name: "<<Name;
            cout<<"Your gmail: "<<password;
        }
        string setName()
        {
            return Name;
        }
        string setPassword()
        {
            return password;
        }
        string setGmail()
        {
            return gmail;
        }
    private:
        string Name;
        string gmail;
        string password;
};

#endif 
