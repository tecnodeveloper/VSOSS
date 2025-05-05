//! Messaging app
//! User can create different Account
//! Account can send message and store in the program
//! 1 for create account   2 for show account    3 for send message   4 for recieve message  5 for close account

#include <iostream>
#include <string.h>
#include "OpenAccount.h"
using namespace std;
int main()
{
    int n;
    while (1)
    {
        cout << "\n 1 for create account \n 2 for show account \n 3 for send message \n 4 for recieve message \n 5 for close program\n Input your choice  ";
        cin >> n;
        OpenAccount object;
        if (n == 1)
        {
            string name, gml, passwd;
            cin.ignore();
            cout << "\nEnter your name: ";
            getline(cin, name);
            cout << "\nEnter your gmail: ";
            cin >> gml;
            cin.ignore();
            cout << "\nEnter your password: ";
            getline(cin, passwd);
            object.getName(name);
            object.getGmail(gml);
            object.getPassword(passwd);
        }
        else if (n == 2)
        {
            string gs, ps;
            cout << "Enter gmail: ";
            cin >> gs;
            if (object.setGmail() == gs)
            {
                cout << "Enter password: ";
                cin >> ps;
                if (object.setPassword() == ps)
                {
                    cout << "\n                               --------------------- Login successfully ---------------------\n";
                    object.setDisplay();
                }
                else
                    cout << "Password is incorrect";
            }
            else
                cout << "Gmail is incorrect";
        }
        else if (n == 3)
        {
        }
        else if (n == 4)
        {
        }
        else if (n == 5)
        {
            cout << "Account Closed";
            exit(0);
        }
        else
            cout << "Please select again choices (1,2,3,4,5) \n\n";
    }
    return 0;
}