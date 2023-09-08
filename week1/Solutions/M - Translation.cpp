#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    string s, r;
    cin >> s >> r;
    bool isreverse = true;
    ll size = s.size();
    for (int i = 0; i < size; i++)
    {
        if (s[i] != r[(size - 1)- i])
        {
            isreverse = 0;
            break;
        }
    }
    string o = isreverse ? "YES" : "NO";
    cout << o << '\n';
    return 0;
}