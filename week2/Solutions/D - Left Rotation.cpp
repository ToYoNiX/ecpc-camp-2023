#include <iostream>
#include <queue>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    queue <ll> q;
    ll n, d;
    cin >> n >> d;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        q.push(a);
    }
    while (d--)
    {
        q.push(q.front());
        q.pop();
    }

    for (ll i = 0; i < n; i++)
    {
        cout << q.front() << ' ';
        q.pop();
    }

    return 0;
}