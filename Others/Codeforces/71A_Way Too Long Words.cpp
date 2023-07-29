#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	while (n--)
	{
		string s;
		cin >> s;
		int l = s.length();
		if (l < 11)
			cout << s << endl;
		else
			cout << s[0] << l - 2 << s[l - 1] << endl;
	}
	return 0;
}