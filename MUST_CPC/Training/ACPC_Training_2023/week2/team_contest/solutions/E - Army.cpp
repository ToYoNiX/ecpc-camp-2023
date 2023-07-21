#include <iostream>
#include <vector>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    int n;
    cin >> n;
    int d [n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> d[i];
    }
    int a, b, ans(0);
    cin >> a >> b;

    for (int i = a - 1; i < b - 1 ; i++)
    {
        ans += d[i];
    }

    cout << ans << '\n';
    return 0;
}