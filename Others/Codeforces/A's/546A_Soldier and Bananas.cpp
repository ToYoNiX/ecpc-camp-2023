#include <iostream>
#define ll long long
using namespace std;
int main()
{
	int k = 0, w = 0;
	ll n = 0, ans = 0;
	cin >> k >> n >> w;
	w += 1;
	while (w--)
	{
		ans += (k * w);
	}
	if (ans <= n)
		cout << 0 << endl;
	else
		cout << ans - n << endl;
	return 0;
}