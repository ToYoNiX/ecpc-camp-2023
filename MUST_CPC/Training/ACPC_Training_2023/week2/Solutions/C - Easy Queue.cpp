#include <iostream>
#include <queue>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    ll t;
    cin >> t;
    queue <ll> que;
    while (t--)
    {
        ll q;
        cin >> q;
        if (q == 1)
        {
            ll n;
            cin >> n;
            que.push(n);
        }
        else if (q == 2)
        {
            if (!que.empty())
            {
                que.pop();
            }
        }
        else
        {
            if (que.empty()) 
            {
                cout << "Empty!\n";
                continue;
            }
            cout << que.front() << '\n';
        }
    }
    return 0;
}