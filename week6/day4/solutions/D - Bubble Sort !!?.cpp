#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    ll n, counter = 0;
    cin >> n;
    ll arr[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (ll i = n - 1; i > -1; i--)
    {
        for (ll j = 0; j < n; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                ll temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                counter++;
            }
        }
    }

    cout << counter << '\n';

    return 0;   
}