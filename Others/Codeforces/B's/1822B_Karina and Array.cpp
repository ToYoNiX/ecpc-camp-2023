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
        fastio
        priority_queue <ll> pq, npq;
        ll n, ans(1), nans(1);
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            ll input;
            cin >> input;
            pq.push(input);
            npq.push(-input);
        }
        ans *= pq.top();
        pq.pop();
        ans *= pq.top();

        nans *= npq.top();
        npq.pop();
        nans *= npq.top();
        
        ll o = max (ans, nans);
        cout << o << '\n';
    }
    return 0;
}