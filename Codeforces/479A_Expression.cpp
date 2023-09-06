#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    int a, b, c, ans(0);
    cin >> a >> b >> c;
    ans = a + b + c;
    ans = max (ans, a * c * b);
    ans = max (ans, (a + b) * c);
    ans = max (ans, a * (b + c));
    ans = max (ans, a + (b * c));
    ans = max (ans, (a * b) + c);
    
    cout << ans << '\n';
    return 0;
}