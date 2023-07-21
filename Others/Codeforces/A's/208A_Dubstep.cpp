#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    string s;
    cin >> s;
    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 2;
            cout << ' ';
            continue;
        }
        cout << s[i];
    }
    cout << '\n';
    return 0;
}