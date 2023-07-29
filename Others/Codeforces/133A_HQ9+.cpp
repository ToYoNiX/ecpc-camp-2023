#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    string s;
    cin >> s;
    ll n = s.size();
    bool willoutput = 0;
    for (int i = 0; i < n; i++)
    {
        if (s [i] == 'H' || s [i] == 'Q' || s [i] == '9')
        {
            willoutput = true;
            break;
        }
    }
    string o = willoutput ? "YES" : "NO";
    cout << o << '\n';
    return 0;
}