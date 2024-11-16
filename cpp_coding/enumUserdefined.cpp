// enumeration is user defined datatype consist of integral constant.
#include <iostream>
using namespace std;
enum day
{
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};
enum dept
{
	cs = 1,
	se,
	it,
	ds
};
int main()
{
	day d;
	d = Monday;
	cout << "Monday: " << d << endl;
	cout << "Tuesday: " << Tuesday << endl;
	cout << "Wednesday: " << Wednesday << endl;
	cout << "Thursday: " << Thursday << endl;
	cout << "Friday: " << Friday << endl;
	cout << "Saturday: " << Saturday << endl;
	cout << "Sunday: " << Sunday << endl;
	cout << "                      " << endl;
	cout << "Departement of CS: " << cs << endl;
	cout << "Departement of IT: " << it << endl;
	cout << "Departement of SE: " << se << endl;
	cout << "Departement of DS: " << ds << endl;
	return 0;
}
