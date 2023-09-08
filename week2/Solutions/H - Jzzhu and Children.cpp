#include <iostream>
#include <queue>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    int n, m;
    cin >> n >> m;
    queue <pair<int, int>> q;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        q.push({i, a});
    }

    while (q.size() > 1)
    {
        if (q.front().second <= m)
        {
            q.pop();
            continue;
        }
        q.push({q.front().first, q.front().second - m});
        q.pop();
    }
    
    cout << q.front().first << '\n';

    return 0;
}