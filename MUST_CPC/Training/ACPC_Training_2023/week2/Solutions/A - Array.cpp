#include <iostream>
#include <deque>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    int n;
    cin >> n;
    deque <int> dq1, dq2, dq3;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a < 0)
        {
            dq1.push_back(a);
        }
        else if (a > 0)
        {
            dq2.push_back(a);
        }
        else
        {
            dq3.push_back(a);
        }
    }

    if (dq2.empty())
    {
        dq2.push_back(dq1.back());
        dq1.pop_back();
        dq2.push_back(dq1.back());
        dq1.pop_back();
    }

    if (dq1.size() % 2 == 0)
    {
        dq3.push_back(dq1.back());
        dq1.pop_back();
    }

    cout << dq1.size();
    while (!dq1.empty())
    {
        cout << ' ' << dq1.front();
        dq1.pop_front();
    }

    cout << '\n' << dq2.size();
    while (!dq2.empty())
    {
        cout << ' ' << dq2.front();
        dq2.pop_front();
    }

    cout << '\n' << dq3.size();
    while (!dq3.empty())
    {
        cout << ' ' << dq3.front();
        dq3.pop_front();
    }


    cout << '\n';
    return 0;
}