#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    ll n, x, counter = 0;
    cin >> n >> x;
    while (n / x != 0)
    {
        n = n / x;
        counter++;
    }

    cout << counter + 1 << '\n';
    return 0;
}