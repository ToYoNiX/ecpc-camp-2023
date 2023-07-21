#include <iostream>
#include <deque>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    ll n, m;
    cin >> n >> m;
    deque <ll> l, r;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        l.push_back(a);
        r.push_back(b);
    }
    
    return 0;
}