#include <iostream>
#include <map>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    
    ll n, m, bigest_number = 0;

    cin >> n >> m;
    map <ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        if (a > bigest_number)
        {
            bigest_number = a;
        }
        mp[a]++;
    }

    ll arr[bigest_number]{};

    for (int i = 1; i < bigest_number + 1; i++)
    {
        arr[i] = mp[i] + arr[i - 1];
    }
    
    for (int i = 0; i < m; i++)
    {
        ll a;
        cin >> a;
        cout << arr[a] << ' ';
    }

    cout << '\n';
    return 0;
}