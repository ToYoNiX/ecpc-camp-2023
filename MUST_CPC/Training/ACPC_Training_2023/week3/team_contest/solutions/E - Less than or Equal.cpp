#include <iostream>
#include <algorithm>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    
    ll n, m;

    cin >> n >> m;
    ll a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    sort (a, a + n);

    for (int i = 0; i < m; i++)
    {
        cout << upper_bound(a, a + n, b[i]) - a << ' ';
    }

    cout << '\n';
    return 0;
}