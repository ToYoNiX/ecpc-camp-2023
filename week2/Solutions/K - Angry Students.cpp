#include <iostream>
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
        int k, ans(0);
        cin >> k;
        
        string s;
        cin >> s;
        
        int o = 0;
        while (k--)
        {
            if (s[k] == 'A')
            {
                if (ans > o)
                {
                    o = ans;
                }
                ans = 0;
            }
            else
            {
                ans++;
            }
        }
        cout << o << '\n';
    }
    return 0;
}