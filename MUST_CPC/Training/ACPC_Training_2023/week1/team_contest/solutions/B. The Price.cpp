#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    ll n, lowest_price = __INT_MAX__, total = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        ll amount, price;
        cin >> amount >> price;
        if (price < lowest_price)
        {
            lowest_price = price;
        }
        
        total += lowest_price * amount;
    }

    cout << total << '\n';
    return 0;
}