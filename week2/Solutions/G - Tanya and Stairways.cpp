#include <iostream>
#include <vector>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    int n, t(0);
    cin >> n;
    vector <int> vec;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            t++;
        }
        vec.push_back(a);
    }
    vec.push_back(1);

    cout << t << '\n';
    for (int i = 1; i <= n; i++)
    {
        if (vec[i] == 1)
        {
            cout << vec[i - 1] << ' ';
        }
    }
    cout << '\n';

    return 0;
}