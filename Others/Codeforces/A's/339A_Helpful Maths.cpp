#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	for (int i = 0; i < s.length() - 1; i++)
	{
		if (s[i] != '+')
			cout << s[i] << "+";
	}
	cout << s[s.length() - 1] << endl;
	return 0;
}