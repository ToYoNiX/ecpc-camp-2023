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
    
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it -> second >= 2)
        {
            cout << "Yes\n";
            return 0;
        }
    }

    cout << "No\n";
    return 0;
}