#include <iostream>
#include <algorithm>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    ll s, n;
    cin >> s >> n;

    pair<ll, ll> arr[n];

    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        arr[i] = make_pair(x, y);
    }

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        if (s > arr[i].first)
        {
            s += arr[i].second;
        }
        else
        {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}