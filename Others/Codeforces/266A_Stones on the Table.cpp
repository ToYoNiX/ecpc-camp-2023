#include <iostream>
using namespace std;
int main()
{
	int n = 0 , counter = 0 ;
	cin >> n;
	string s;
	cin >> s;
	n -= 1;
	while (n--)
	{
		if (s[n] == s[n + 1])
			counter++;
	}
	cout << counter << endl;
}