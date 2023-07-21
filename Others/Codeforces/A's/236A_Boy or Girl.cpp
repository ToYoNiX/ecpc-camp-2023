#include <iostream>
#include <set>
using namespace std;
int main()
{
	string s;
	set<char> l;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			l.insert(s[i]);
	}
	if ((l.size() % 2) == 0)
		cout << "CHAT WITH HER!" << endl;
	else
		cout << "IGNORE HIM!" << endl;
	return 0;
}