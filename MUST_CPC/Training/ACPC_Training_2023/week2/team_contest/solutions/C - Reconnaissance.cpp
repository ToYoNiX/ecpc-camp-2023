#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    ll n, d;
    cin >> n >> d;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort (arr, arr + n);
    int ans(0);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] - arr[i] <= d)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
    }

    cout << ans * 2 << '\n';
    return 0;
}