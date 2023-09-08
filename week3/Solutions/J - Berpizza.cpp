#include <iostream>
#include <set>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    set <pair<ll, ll>> st2, st3;

    ll q, count = 1;
    cin >> q; 

    while (q--) 
    {
        long w;
        cin >> w;

        if (w == 1) 
        {
            ll money;
            cin >> money;
            st2.insert({count, money});
            st3.insert({money, count});
            count++;
        }
        else if (w == 2) 
        {
            auto it = st2.begin();
            cout << it -> first << ' ';
            st3.erase({it->second, it->first});
            st2.erase(it);
        }
        else if (w == 3) 
        {
            auto p = --st3.end();
            auto it = st3.lower_bound({p->first, -1});
            cout << it -> second << ' ';
            st2.erase({it->second, it->first});
            st3.erase(it);
        }
    }

    cout << '\n';
    return 0;
}