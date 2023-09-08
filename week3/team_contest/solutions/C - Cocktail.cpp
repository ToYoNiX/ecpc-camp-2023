#include <iostream>
#include <iomanip>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    double n, ans(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        ans += p;
    }

    cout << setprecision(14) << showpoint << (ans / n) << '\n';
    return 0;
}