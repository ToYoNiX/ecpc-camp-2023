#include <iostream>
#include <map>
#include <set>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    string s, t, r;
    cin >> s >> t >> r;
    map <char, ll> names ,pile;
    set <char> c_names, c_piles;

    ll len = s.size();
    while (len--)
    {
        names[s[len]]++;
        c_names.insert(s[len]);
    }

    len = t.size();
    while (len--)
    {
        names[t[len]]++;
        c_names.insert(t[len]);
    }

    len = r.size();
    while (len--)
    {
        pile[r[len]]++;
        c_piles.insert(r[len]);
    }

    if (c_piles.size() != c_names.size())
    {
        cout << "NO\n";
        return 0;
    }

    for (auto it = names.begin(); it != names.end(); it++)
    {
        if (pile[it->first] != it->second)
        {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}