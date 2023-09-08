#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    ll t, x, z;
    cin >> t >> x;
    z = 7 - x;
    bool isunique = true;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if ( a != x && a != z && b != x && b != z )
        {
            continue;
        }
        isunique = false;
    }
    string o = isunique ? "YES" : "NO";

    cout << o << '\n';

    return 0;
}