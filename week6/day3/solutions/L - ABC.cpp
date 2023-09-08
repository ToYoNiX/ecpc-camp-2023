#include <iostream>
#include <vector>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    string s;
    cin >> s;
    ll l = s.length();
    vector <pair<ll,ll>> vec;
    for (int i = 0; i < l - 2; i++)
    {
        if (s[i] == 'a' && s[i + 1] == 'c')
        {
            vec.push_back({1, i + 1});
            vec.push_back({4, i + 1});
            s.erase(i, i + 1);
        }
        else if (s[i] == 'a' && s[i + 1] == 'b')
        {
            vec.push_back({2, i + 1});
            vec.push_back({4, i + 1});
            s.erase(i, i + 1);
        }
    }

    cout << vec.size() << '\n';
    for (auto it : vec)
    {
        cout << it.first << ' ' << it.second << '\n';
    }

    return 0;
}