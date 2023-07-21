#include <iostream>
#include <map>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    ll n;
    cin >> n;
    map <string, ll> mp;
    while (n--)
    {
        string s;
        cin >> s;
        if (mp[s] == 0)
        {
            cout << "OK\n";
        }
        else
        {
            cout << s << mp[s]<< '\n';
        }
        mp[s]++;
    }
    
    return 0;
}