#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    string s;
    cin >> s;

    ll counter = 0;
    while (s.size() != 1)
    {
        ll sum = 0;
        for (ll i = 0; i < s.size(); i++)
        {
            sum += s[i] - '0';
        }

        s = to_string(sum);
        counter++;
    }
    cout << counter << '\n';
    return 0;
}