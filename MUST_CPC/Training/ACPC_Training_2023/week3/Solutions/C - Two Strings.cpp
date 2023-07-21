#include <iostream>
#include <map>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    ll p;
    cin >> p;
    while (p--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        map <char, bool> mp;

        bool issubstring = false;

        for (int i = 0; i < s1.size(); i++)
        {
            mp[s1[i]] = true;
        }

        for (int i = 0; i < s2.size(); i++)
        {
            if (mp[s2[i]] == true)
            {
                issubstring = true;
                break;
            }
        }

        string o = issubstring ? "YES" : "NO";
        cout << o << '\n';
    }
    
    return 0;
}