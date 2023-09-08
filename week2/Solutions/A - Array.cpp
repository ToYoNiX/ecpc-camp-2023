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
    deque <int> neg, pos, zero;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a < 0)
        {
            neg.push_back(a);
        }
        else if (a > 0)
        {
            pos.push_back(a);
        }
        else
        {
            zero.push_back(a);
        }
    }

    if (pos.empty())
    {
        pos.push_back(neg.back());
        neg.pop_back();
        pos.push_back(neg.back());
        neg.pop_back();
    }

    if (neg.size() % 2 == 0)
    {
        zero.push_back(neg.back());
        neg.pop_back();
    }

    cout << neg.size();
    while (!neg.empty())
    {
        cout << ' ' << neg.front();
        neg.pop_front();
    }

    cout << '\n' << pos.size();
    while (!pos.empty())
    {
        cout << ' ' << pos.front();
        pos.pop_front();
    }

    cout << '\n' << zero.size();
    while (!zero.empty())
    {
        cout << ' ' << zero.front();
        zero.pop_front();
    }


    cout << '\n';
    return 0;
}