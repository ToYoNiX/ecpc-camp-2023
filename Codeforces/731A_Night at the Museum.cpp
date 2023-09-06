#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;

int rotation_counter(char c1, char c2)
{
    int count = abs(int(c1) - int(c2));

    if (count > 13)
    {
        return 26 - count;
    }
    return count;
}

int main ()
{
    fastio

    int ans(0);

    string s;
    cin >> s;

    int len = s.length();

    for (int i = -1; i < len - 1; i++)
    {
        if (i == -1)
        {
            ans += rotation_counter('a', s[0]);
            continue;
        }

        ans += rotation_counter(s[i], s[i + 1]);
    }

    cout << ans << '\n';

    return 0;
}