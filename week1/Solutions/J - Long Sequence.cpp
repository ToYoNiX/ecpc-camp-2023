#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    ll n, sum(0);
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    ll x, ans;
    cin >> x;

    ans = x / sum;
    sum *= ans;
    ans *= n;

    for (ll i = 0; i < n; i++)
    {
        if (sum > x)
        {
            break;
        }
        sum += a[i];
        ans++;
    }

    cout << ans << '\n';
    
    return 0;
}