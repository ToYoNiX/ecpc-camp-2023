#include <iostream>
using namespace std;
int main()
{
	long i = 0,
	    a = 0,
		d = 0;
	cin >> i;
	while (i--)
	{
		char input;
		cin >> input;
		if (input == 'A')
			a++;
		else
			d++;
	}
	if (a > d)
		cout << "Anton";
	else if (a < d)
		cout << "Danik";
	else
		cout << "Friendship";
	return 0;
}