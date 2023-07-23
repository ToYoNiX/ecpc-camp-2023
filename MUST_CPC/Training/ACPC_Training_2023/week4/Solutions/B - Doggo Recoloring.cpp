#include <iostream>
#include <map>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    ll n;
    cin >> n;
    map <char, ll> mp;
    string s;
    cin >> s;
    
    for (ll i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }

    if (mp.size() == 1)
    {
        cout << "Yes\n";
        return 0;
    }
    
    bool req1 = false, req2 = false;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it -> second == 1)
        {
            req1 = true;
        }
        else if (it -> second > 1)
        {
            req2 = true;
        }
    }
    
    if (req1)
    {
        if (req2)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    else
    {
        cout << "Yes\n";
    }

    return 0;
}