#include <iostream>
#include <set>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    ll n, m, b, input;
    cin >> b >> n >> m;

    set <ll> keyboard, drives;

    for (int i = 0; i < n; i++)
    {
        cin >> input;
        keyboard.insert(input);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> input;
        drives.insert(input);   
    }

    ll total = -1;

    for (auto itr1 = keyboard.begin(); itr1 != keyboard.end(); itr1++)
    {
        for (auto itr2 = drives.begin(); itr2 != drives.end(); itr2++)
        {
            if (*itr1 + *itr2 > b)
            {
                break;
            }
            
            if (*itr1 + *itr2 > total && *itr1 + *itr2 <= b)
            {
                total = *itr1 + *itr2;
            }
        }
    }

    cout << total << '\n';
    return 0;
}