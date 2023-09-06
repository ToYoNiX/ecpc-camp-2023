#include <iostream>
using namespace std;
int main()
{
	int n = 0 , x = 0;
	cin >> n;
	while (n--)
	{
		string i;
		cin >> i;
		if (i == "X++" || i == "++X")
			x++;
		else
			x--;
	}
	cout << x << endl;
	return 0;
}