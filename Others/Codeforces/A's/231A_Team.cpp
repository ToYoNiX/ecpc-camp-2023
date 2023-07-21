#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n = 0, counter = 0;
	cin >> n;
	while (n--)
	{
		int arr[3]{};
		for (int i = 0; i < 3; i++)
		{
			cin >> arr[i];
		}
		if ((arr[0] == 1 && arr[1] == 1) || (arr[0] == 1 && arr[2] == 1)
			|| (arr[1] == 1 && arr[2] == 1)
			|| (arr[0] == 1 && arr[1] == 1 && arr[2] == 1))
			counter++;
	}
	cout << counter;
	return 0;
}