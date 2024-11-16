// // Pattern lower star
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             if (i >= j)
//                 cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// // Pattern Upper star
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             if (i <= j)
//                 cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// //Pattern Right upper star
// #include<iostream>
// using namespace std;
// int main()
// {
//     for (int i = 0; i < 4; i++)
//     {
//         for(int j = 0; j < 4; j++)
//         {
//             if ( i > j)
//             cout<<" ";
//             else
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// Pattern lower Right star
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i + j > 4-1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}