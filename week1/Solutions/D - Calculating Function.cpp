#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    ll i;
    cin >> i;
    if (!(i % 2)) 
        cout << i / 2 << '\n';
    else
        cout << -((i + 1) / 2) << '\n';
    return 0;
}