#include <iostream>
#include <algorithm>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    ll n;
    cin >> n;
    while (n--)
    {
        ll a;
        cin >> a;
        if (a == 1)
        {
            cout << -1 << '\n';
            return 0;
        }
    }
    
    cout << 1 << '\n';
    return 0;
}