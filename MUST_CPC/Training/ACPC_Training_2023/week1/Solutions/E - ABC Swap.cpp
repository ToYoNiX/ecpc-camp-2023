#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    ll a, b, c, temp;
    cin >> a >> b >> c;
    temp = a;
    a = b;
    b = temp;
    temp = a;
    a = c;
    c = temp;
    cout << a << ' ' << b << ' ' << c << '\n';
    return 0;
}