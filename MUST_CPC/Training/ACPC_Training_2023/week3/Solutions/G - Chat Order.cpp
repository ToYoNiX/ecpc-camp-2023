#include <iostream>
#include <unordered_map>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    ll n;
    cin >> n;
    unordered_map <string, bool> mp;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    while (n--)
    {
        if (mp[s[n]] == 0)
        {
            cout << s[n] << '\n';
            mp[s[n]] = true;
        }
    }
    
    return 0;
}