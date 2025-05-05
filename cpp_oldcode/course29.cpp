////2d array dimmensional array used in matrix
//#include "iostream"
//using namespace std;
//int main()
//{
//    int count{1};
//    for (int i = 0; i < 4; i++) {
//        for (int j = 0; j < 4; j++) {
//            if (i >= j)
//            {
//                cout<<"* ";
//            }
//        }
//        cout<<endl;
//    }
//    return 0;
//}


//diagonal asteriek practice
#include "iostream"
using namespace std;
int main()
{
    int count{1};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i > j)
            {
                cout<<" ";
            }
            else
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}