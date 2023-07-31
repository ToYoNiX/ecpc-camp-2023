#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;

void solution_1()
{
    ll n, m, b;
    cin >> n >> m;

    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll dorm_idx = 0, sum = 0;
    while (m--)
    {
        cin >> b;
        while(sum + a[dorm_idx] < b)
        {
            sum += a[dorm_idx];
            dorm_idx++;
        }
        cout << dorm_idx + 1 << ' ' << b - sum << '\n';
    }
}

void solution_2()
{
    ll n, m, a, b;
    cin >> n >> m;

    ll sum[n + 1]{};
    for (int i = 1; i < n + 1; i++)
    {
        cin >> a;
        sum[i] = sum[i - 1] + a;
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b;
        ll start = 0, end = n - 1, dorm_idx = 0;

        while (start <= end)
        {
            ll mid = (start + end) / 2;
            if (sum[mid] < b)
            {
                dorm_idx = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        cout << dorm_idx + 1 << ' ' << b - sum[dorm_idx] << '\n'; 
    }
}

int main ()
{
    fastio
    solution_1();
    //solution_2();
    return 0;
}