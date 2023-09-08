#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    ll a, b, c;
    cin >> a >> b >> c;

    ll  e1 = a + b * c,
        e2 = a * (b + c),
        e3 = a * b * c,
        e4 = (a + b) * c,
        e5 = a + b + c;

    cout << max(e1, max(e2, max(e3, max(e4, e5)))) << '\n';

    return 0;
}