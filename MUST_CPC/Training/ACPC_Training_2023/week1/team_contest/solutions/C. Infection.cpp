#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    ll x, counter = 0;
    cin >> x;
    while (x != 0)
    {
        if (x % 2 == 0)
        {
            x /= 2;
            continue;
        }
        else
        {
            x /= 2;
            counter++;
        }
    }

    cout << counter << '\n';
    return 0;
}