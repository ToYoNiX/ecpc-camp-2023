#include <iostream>
#include <vector>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i * (i + 1) == 2 * n)
        {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";

    return 0;
}