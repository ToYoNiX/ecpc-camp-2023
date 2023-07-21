#include <iostream>
#include <algorithm>
#include <queue>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    queue <ll> A;
    priority_queue <ll> sorted;
    ll Q;
    cin >> Q;
    while (Q--)
    {
        ll q;
        cin >> q;
        if (q == 1)
        {
            ll x;
            cin >> x;
            A.push(x);
        }
        else if (q == 2)
        {
            if (sorted.empty())
            {
                cout << A.front() << '\n';
                A.pop();
            }
            else
            {
                cout << -sorted.top() << '\n';
                sorted.pop();
            }
        }
        else
        {
            while (!A.empty())
            {
                sorted.push(-A.front());
                A.pop();
            }
        }
    }
    return 0;
}