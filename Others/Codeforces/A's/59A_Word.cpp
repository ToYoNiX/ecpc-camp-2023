#include <iostream>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int c = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (int(s[i]) >= 97)
			c++;
	}
	if (c * 2 >= s.length())
	{
		for (int i = 0; i < s.length(); i++)
		{
			cout << char(tolower(s[i]));
		}
	}
	else
	{
		for (int i = 0; i < s.length(); i++)
		{
			cout << char(toupper(s[i]));
		}
	}
	return 0;
}