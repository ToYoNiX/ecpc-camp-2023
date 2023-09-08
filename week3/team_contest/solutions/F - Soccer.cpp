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

    map <string, int> mp;
    while (n--)
    {
        string s;
        cin >> s;
        mp[s]++;
    }

    int bigger = 0;
    string o;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it -> second > bigger)
        {
            o = it -> first;
            bigger = it -> second;
        }
    }

    cout << o << '\n';
    
    return 0;
}