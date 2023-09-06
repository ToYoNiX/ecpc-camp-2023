#include <iostream>
#include <map>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    int n;
    cin >> n;
    map <int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        int input;
        cin >> input;
        mp [input] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << mp [i] << ' ';
    }
    return 0;
}