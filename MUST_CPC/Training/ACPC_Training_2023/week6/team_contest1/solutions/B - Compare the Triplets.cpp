#include <iostream>
#include <set>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    int a[3], b[3], rank[2]{};

    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            rank[0]++;
        }
        else if (a[i] < b[i])
        {
            rank[1]++;
        }
    }

    cout << rank[0] << ' ' << rank[1] << '\n';
    return 0;
}