#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int movements = 0, swapc = -1;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            movements++;
            swapc++;
        }

        if (swapc != 0 && i == n - 2)
        {
            i = -1;
            swapc = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }

    cout << movements << '\n';
    return 0;
}