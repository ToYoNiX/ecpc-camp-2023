#include <iostream>
#include <algorithm>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    ll n, b = 0, c = 0;
    cin >> n;
    
    while (n--)
    {
        ll a;
        cin >> a;
        if (a > 0)
        {
            b += a;
        }
        else if (a < 0)
        {
            c += a;
        }
    }
    
    cout << b - c << '\n';
    return 0;
}