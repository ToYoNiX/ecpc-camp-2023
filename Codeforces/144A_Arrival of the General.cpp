#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    ll n, a;
    cin >> n >> a;
    ll min = a, min_idx, max = a, max_idx;
    for (int i = 1; i < n; i++)
    {
        cin >> a;
        if (a > max)
        {
            max = a;
            max_idx = i;
        }
        
        if (a <= min)
        {
            min = a;
            min_idx = i;
        }
    }

    cout << max_idx + (n - (min_idx + 1)) - (min_idx < max_idx ? 1 : 0) << '\n';
    return 0;
}