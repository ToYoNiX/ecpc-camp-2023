#include <iostream>
#include <vector>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    ll n, k, half_of_n;
    cin >> n >> k;
    half_of_n = (n + 1) / 2;
    if (k <= half_of_n)
    {
        cout << k * 2 - 1 << '\n';
    }
    else
    {
        cout << (k - half_of_n) * 2 << '\n';
    }
    return 0;
}
/*
int main ()
{
    fastio
    ll n, k;
    cin >> n >> k;
    ll index = 1;
    vector <ll> vec;
    while (index <= n)
    {
        vec.push_back(index);
        index += 2;
    }
    index = 2;
    while (index <= n)
    {
        vec.push_back(index);
        index += 2;
    }
    k--;
    for (int i = 0; i < n; i++)
    {
        cout << vec [i] << ' ';
    }
    return 0;
}
*/