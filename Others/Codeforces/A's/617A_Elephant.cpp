#include <iostream>
using namespace std;
int main()
{
	int x = 0;
	cin >> x;
	if ((x % 5) != 0)
		cout << (x / 5) + 1 << endl;
	else
		cout << x / 5;
	return 0;
}