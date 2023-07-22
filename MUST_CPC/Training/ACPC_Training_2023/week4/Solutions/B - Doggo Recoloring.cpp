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
    
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }

    if (mp.size() == 1)
    {
        cout << "Yes\n";
        return 0;
    }
    else if (mp.size() == n)
    {
        cout << "No\n";
        return 0;
    }

    for (ll i = 0; i < n; i++)
    {
        
    }    
    
    return 0;
}