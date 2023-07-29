#include <iostream>
#include <queue>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    int q;
    cin >> q;
    while (q--)
    {
        priority_queue <pair<int, int>> pq;
        int n, t, at(0), ans;
        cin >> n >> t;
        int d [n], e [n];
        for (int i = 0; i < n; i++)
        {
            cin >> d [i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> e [i];
        }
        for (int i = 0; i < n; i++)
        {
            if (d [i] > t)
            {
                at++;
                continue;
            }
            if (at + d [i] <= t)
            {
                pq.push({e [i], i + 1});
            }
            at++;
        }
        if (pq.empty())
        {
            cout << -1 << '\n';
        }
        else
        {
            pair <int, int> top = pq.top();
            cout << top.second << '\n';
        }
    }
    return 0;
}