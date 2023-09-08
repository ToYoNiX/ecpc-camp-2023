#include <iostream>
#include <map>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    string s;
    cin >> s;

    map <string, ll> mp;
    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i + j <= size)
            {
                mp[s.substr(i, j)]++;
            }
        }
    }

    ll ans = 0;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it -> second < 2)
        {
            continue;
        }

        size = it -> first.size();
        if (size > ans)
        {
            ans = size;
        }
    }

    cout << ans << '\n';
    return 0;
}