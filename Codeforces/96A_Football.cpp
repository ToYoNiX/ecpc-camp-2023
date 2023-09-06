#include <iostream>
using namespace std;
bool issituationdangerous(string s);
int main()
{
	string s;
	cin >> s;
	int ans = issituationdangerous(s);
	if (ans == 1)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
bool issituationdangerous(string s)
{
	int c = 1;
	for (int i = 1; i < s.length(); i++)
	{
		if (s[i - 1] == s[i])
			c++;
		else
			c = 1;
		if (c == 7)
			return true;
	}
	return false;
}
