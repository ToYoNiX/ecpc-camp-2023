#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;

void solution()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll l = 0, r = n - 1, candies_l = 0, candies_r = 0, ans = 0;

    while (l <= r)
    {
        if (candies_l < candies_r)
        {
            candies_l += arr[l];
            l++;
        }
        else if (candies_l > candies_r)
        {
            candies_r += arr[r];
            r--;
        }
        else
        {
            ans = l + ((n - 1) - r);
            candies_l += arr[l];
            l++;
        }
    }

    if (candies_l == candies_r)
    {
        ans = n;
    }

    cout << ans  << '\n';
}

int main ()
{
    fastio
    ll t;
    cin >> t;
    while (t--)
    {
        solution();
    }

    return 0;
}