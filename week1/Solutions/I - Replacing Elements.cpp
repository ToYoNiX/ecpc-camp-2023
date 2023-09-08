#include <iostream>
#include <algorithm>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, d;
        cin >> n >> d;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr [i];
        }
        sort (arr, arr + n);

        if (arr[0] + arr [1] <= d || arr [n - 1] <= d)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    
    return 0;
}