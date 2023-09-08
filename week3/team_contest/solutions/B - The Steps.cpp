#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    ll x;
    cin >> x;
    if (x % 5 == 0)
    {
        cout << x / 5 << '\n';
        return 0;
    }

    cout << (x / 5) + 1 << '\n';
    return 0;
}