#include <iostream>
#define ll long long
using namespace std;
int main ()
{
	ll input;
	cin >> input;
	int lucky_digits = 0;
	while(input)
	{
		int temp = input % 10;
		if(temp == 4 || temp == 7)
		{
			lucky_digits++;
		}
		input /= 10;
	}
	if(lucky_digits == 4 || lucky_digits == 7)
	{
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";
	}
	return 0;
}