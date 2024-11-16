// Binary Search
#include <iostream>
using namespace std;
int main()
{
	int i, n = 9, l = 0, h = 9, key, mid, A[9];
	cout << "Enter array element for binary search: " << endl;
	for (i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	cout << "Enter key: " << endl;
	cin >> key;
	while (l <= h)
	{
		mid = (l + h) / 2;
		if (key == A[mid])
		{
			cout << "Found at index: " << mid;
			return 0;
		}
		else if (key < A[mid])
		{
			h = mid - 1;
		}
		else
			l = mid + 1;
	}
	cout << "Key not found";
	return 0;
}
