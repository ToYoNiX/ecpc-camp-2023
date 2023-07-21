#include <iostream>
#include <queue>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    ll n, m, sum(0);
    priority_queue <ll> pq;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        sum += a;
        pq.push (a - b);
    }

    int o(0);

    while (n--)
    {
        if (sum <= m)
        {
            break;
        }
        sum -= pq.top ();
        pq.pop ();
        o++;
    }

    if (sum <= m)
    {
        cout << o << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }
    
    return 0;
}