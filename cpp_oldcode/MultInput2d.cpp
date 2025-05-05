// //Multiplication of Matrix(c[i][j]=a[i][j]*b[i][j]) as input
// #include<iostream>
// using namespace std;
// int main()
// {
// 	int n;
// 	cout<<"Enter length: "<<endl;
// 	cin>>n;
// 	int A[n][n];
// 	int B[n][n];
// 	int C[n][n];
// 	//Array A element
// 	cout<<"Enter array element of A: "<<endl;
// 	for(int i=0; i<n; i++)
// 	{
// 		for(int j=0; j<n; j++)
// 		{
// 			cin>>A[i][j];
// 		}
// 	}

// //Array B element
// 	cout<<"Enter array element of B: "<<endl;
// 	for(int i=0; i<n; i++)
// 	{
// 		for(int j=0; j<n; j++)
// 		{
// 			cin>>B[i][j];
// 		}
// 	}
// 	//For multiplication
// 	for(int i=0; i<n; i++)
// 	{
// 		for(int j=0; j<n; j++)
// 		{
// 			C[i][j] +=A[i][j]*B[i][j];
// 		}
// 	}
// 	//For output
// 	for(int i=0; i<n; i++)
// 	{
// 		for(int j=0; j<n; j++)
// 		{
// 			cout<<C[i][j]<<" ";
// 		}
// 		cout<<endl;
// 	}

// }

// Advance Multiplication:
#include <iostream>
using namespace std;
int main()
{
	int r1, r2, c1, c2, i, j;
	cout << "Enter the row and column of 1 array element: " << endl;
	cin >> r1 >> c1;
	cout << "Enter the row and column of 2 array element: " << endl;
	cin >> r2 >> c2;
	if (c1 != r2)
	{
		cout << "Multiplication not possible";
		return 0;
	}
	int A[r1][c1];
	cout << "Enter array element of 1: " << endl;
	for (i = 0; i < r1; i++)
	{
		for (j = 0; j < c1; j++)
		{
			cin >> A[i][j];
		}
	}
	int B[r2][c2];
	cout << "Enter array element of 2: " << endl;
	for (i = 0; i < r2; i++)
	{
		for (j = 0; j < c2; j++)
		{
			cin >> B[i][j];
		}
	}
	int C[i][j] = {0};
	for (i = 0; i < r2; i++)
	{
		for (j = 0; j < c2; j++)
		{
			C[i][j] += A[i][j] * B[i][j];
		}
	}

	for (i = 0; i < r1; i++)
	{
		for (j = 0; j < c1; j++)
		{
			cout << C[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
