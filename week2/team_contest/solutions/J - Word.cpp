#include <iostream>
#include <vector>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    string s;
    cin >> s;

    int size = s.size(), small(0), capital(0);
    for (int i = 0; i < size; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' )
        {
            small++;
        }
        else
        {
            capital++;
        }
    }

    if (capital > small)
    {
        for (int i = 0; i < size; i++)
        {
            cout << char(toupper(s[i]));
        }
        cout << '\n';
        return 0;
    }

    for (int i = 0; i < size; i++)
        {
            cout << char(tolower(s[i]));
        }

    return 0;
}