#include <iostream>
#include <unordered_map>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    int t;
    cin >> t;
    while (t--)
    {
        unordered_map <int, bool> mp;
        int n, m, ans(0);
        cin >> n >> m;
        while (n--)
        {
            int num;
            cin >> num;
            mp[num] = true;
        }
        while (m--)
        {
            int num;
            cin >> num;
            if (mp[num] == true)
            {
                ans++;
            }
        }

        cout << ans << '\n';
    }
    
    return 0;
}