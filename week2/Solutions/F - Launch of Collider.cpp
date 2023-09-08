#include <iostream>
#include <vector>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector <ll> vec;

    for (ll i = 0; i < n; i++)
    {
        ll c;
        cin >> c;
        vec.push_back(c);
    }

    ll a = __LONG_MAX__;

    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'R' && s[i + 1] == 'L' && vec[i] < vec[i + 1])
        {
            ll t =  (vec[i + 1] - vec[i]) / 2;
            if (t < a)
            {
                a = t;
            }
        }
    }

    if ( a == __LONG_MAX__)
    {
        cout << -1 << '\n';
        return 0;
    }

    cout << a << '\n';
    return 0;
}