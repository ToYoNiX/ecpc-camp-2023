#include <cmath>
#include <iostream>
#define ll long long
using namespace std;
int main()
{
    ll n = 0, m = 0, a = 0;
    cin >> n >> m >> a;
    cout << ((m + a - 1) / a) * ((n + a - 1) / a) << "\n";
    return 0;
}
