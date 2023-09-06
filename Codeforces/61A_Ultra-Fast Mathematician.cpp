#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    string s, t;
    cin >> s >> t;
    ll n = s.size();
    for (int i = 0; i < n; i++)
    {
        if(s[i] != t[i])
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }
    cout << '\n';
    return 0;
}