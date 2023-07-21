#include <iostream>
#include <queue>
#include <vector>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        n = n * (n + 2) + 2;
        cout << n << '\n';
    }
    return 0;
}