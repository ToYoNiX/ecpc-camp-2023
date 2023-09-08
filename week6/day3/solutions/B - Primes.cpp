#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;

bool isprime(ll n)
{
    for (ll i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main ()
{
    ll n;
    cin >> n;
    if (n < 5)
    {
        cout << -1 << '\n';
        return 0;
    }
    if (isprime(n - 2))
    {
        cout << 2 << ' ' << n - 2 << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }
    return 0;
}