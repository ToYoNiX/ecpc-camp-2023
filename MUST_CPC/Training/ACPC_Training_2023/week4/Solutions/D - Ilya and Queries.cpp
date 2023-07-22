#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    string s;
    cin >> s;

    ll len = s.size(), counter(0), freq[len + 1]{};

    for (ll i = 1; i < len; i++)
    {
        if (s[i] == s[i - 1])
        {
            counter++;
        }
        freq[i + 1] = counter;
    }

    ll q;
    cin >> q;
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        cout << freq[r] - freq[l] << '\n';
    }

    return 0;
}