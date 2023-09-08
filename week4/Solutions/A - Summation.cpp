#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    ll n, ans(0);
    cin >> n;
    while (n--)
    {
        ll a;
        cin >> a;
        ans += a;
    }

    cout << abs(ans) << '\n';
    return 0;
}