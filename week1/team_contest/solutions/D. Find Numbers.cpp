#include <iostream>
#include <algorithm>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    ll s, g;
    cin >> s >> g;

    if (__gcd(s - g, g) == g && s != g)
    {
        cout << s - g << ' ' << g << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }

    return 0;
}