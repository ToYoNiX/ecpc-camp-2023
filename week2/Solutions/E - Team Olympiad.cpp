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
    vector <int> v1, v2, v3;
    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            v1.push_back(i);
        }
        else if (t == 2)
        {
            v2.push_back(i);
        }
        else
        {
            v3.push_back(i);
        }
    }

    int w = min(v1.size(), min(v2.size(), v3.size()));
    cout << w << '\n';

    for (int i = 0; i < w; i++)
    {
        cout << v1[i] << ' ' << v2[i] << ' ' << v3[i] << '\n';
    }
    return 0;
}