//Input array element for multiplication of row and coloumn
#include "iostream"
using namespace std;
int main()
{
    int a[10][10], b[10][10], mult[10][10], r1,c1,r2,c2,i,j;

    cout<<"Enter rows and columns for first matrix: ";
    cin>>r1>>c1;
    cout<<"Enter rows and columns of second matrix: ";
    cin>>r2>>c2;

    if(c1!=r2)
    {
        cout<<"Can't Multiplied";
        return 0;
    }
    //Storing elements of first matrix.
    cout<<endl<<"Enter elements of matrix 1: "<<endl;
    for(i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c1; ++j) {
            cout<<"Enter element a: "<< i + 1 << j+1 <<" : ";
            cin>>a[i][j];
        }
    }
    //Storing elements of second matrix
    cout<<endl<<"Enter elements of matrix 2: "<<endl;
    for(i = 0; i < r2; ++i)
    {
        for (int j = 0; j < c2; ++j) {
            cout<<"Enter element a: "<< i + 1 << j+1 <<" : ";
            cin>>b[i][j];
        }
    }
    //Multiplication of matrix a and b and storing in array mult
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
           mult[i][j]=0;
            for (int l = 0; l < c1; ++l) {
                mult[i][j] += a[i][j] * b[i][j];
            }
        }
    }
    //Displaying the multiplication of two matrix
    cout<<endl<<"------Output Matrix--------"<<endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout<<" " << mult[i][j];
            if(j == c2-1)
                cout<<endl;
        }
    }
    return 0;
}