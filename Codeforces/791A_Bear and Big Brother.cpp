#include <iostream>
using namespace std;
int main()
{
	int limak_w = 0, bob_w = 0, i = 0;
	cin >> limak_w >> bob_w;
	for ( i; limak_w <= bob_w; i++)
	{
		limak_w *= 3;
		bob_w *= 2;
	}
	cout << i << endl;
	return 0;
}