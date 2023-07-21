#include <iostream>
using namespace std;
int main()
{
	int sum_x = 0, sum_y = 0, sum_z = 0 , n = 0;
	cin >> n;
	while (n--)
	{
		int x = 0, y = 0, z = 0;
		cin >> x >> y >> z;
		sum_x += x;
		sum_y += y;
		sum_z += z;
	}
	if (sum_x == 0 && sum_y == 0 && sum_z == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}