#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;

void solution()
{
    ll n, sec(1), ans(0);
    char c;
    string s;

    cin >> n >> c >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == c)
        {
            sec = 0;
            while (s[i] != 'g' && i < n)
            {
                sec++, i++;
            }
            
            if (sec > ans)
            {
                ans = sec;
            }
        }
    }

    cout << ans << '\n';
}

int main ()
{
    fastio
    ll t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}