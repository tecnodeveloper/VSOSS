// Reversing Number
#include <iostream>
using namespace std;
int main()
{
	int n, r, rev = 0;
	cout << "Enter No for reverse: ";
	cin >> n;
	while (n > 0)
	{
		r = n % 10;
		n = n / 10;
		rev = rev * 10 + r;
	}
	cout << "Reverse diigt: " << rev;
	return 0;
}
