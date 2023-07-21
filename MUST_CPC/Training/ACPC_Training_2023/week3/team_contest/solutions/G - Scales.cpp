#include <iostream>
#include <map>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    string s, remaining, r, l;
    cin >> s >> remaining;

    bool isleft = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '|')
        {
            isleft = true;
            continue;
        }

        if (isleft)
        {
            l.push_back(s[i]);
            continue;
        }
        r.push_back(s[i]);
    }

    int d = max(r.size(), l.size()) - min(r.size(), l.size());
    if ((remaining.size() < d) || (d % 2 == 0 && remaining.size() % 2 != 0) || (d % 2 != 0 && remaining.size() % 2 == 0))
    {
        cout << "Impossible\n";
        return 0;
    }

    if (r.size() > l.size())
    {
        while (r.size() > l.size())
        {
            l.push_back(remaining.back());
            remaining.pop_back();
        }
    }
    else if (r.size() < l.size())
    {
        while (r.size() < l.size())
        {
            r.push_back(remaining.back());
            remaining.pop_back();
        }
    }

    while (remaining.size() != 0)
    {
        l.push_back(remaining.back());
        remaining.pop_back();
        r.push_back(remaining.back());
        remaining.pop_back();
    }


    for (int i = 0; i < r.size(); i++)
    {
        cout << r[i];
    }
    cout << '|';
    for (int i = 0; i < l.size(); i++)
    {
        cout << l[i];
    }
    cout << '\n';
    return 0;
}