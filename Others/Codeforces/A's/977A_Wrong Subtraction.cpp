#include <iostream>
using namespace std;
int main()
{
	int n = 0, i = 0;
	cin >> i >> n;
	while (n--)
	{
		if (i % 10 == 0)
			i /= 10;
		else
			i--;
	}
	cout << i << endl;
	return 0;
}