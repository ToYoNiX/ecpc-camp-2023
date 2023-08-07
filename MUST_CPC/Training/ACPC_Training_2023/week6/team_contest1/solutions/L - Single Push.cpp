#include <iostream>
#include <set>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;

bool solution()
{
    ll n;
    cin >> n;
    ll arr1[n], arr2[n];

    bool ans = false;

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    ll counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] == arr2[i])
        {
            counter = 0;
            continue;
        }

        ll k = arr1[i] - arr2[i];
        i++;
        counter++;
        while (arr1[i] != arr2[i] && i < n)
        {
            if (arr1[i] - arr2[i] != k)
            {
                counter = 0;
                continue;
            }
            counter++;
            i++;

            if (counter >= 3 || counter == n)
            {
                ans = true;
            }
            else
            {
                ans = false;
            }
        }
    }

    return ans;
}

int main ()
{
    fastio
    ll t;
    cin >> t;
    while (t--)
    {
        char output[][4] = {"NO", "YES"};
        cout << output[solution()] << '\n';
    }
    
    return 0;
}