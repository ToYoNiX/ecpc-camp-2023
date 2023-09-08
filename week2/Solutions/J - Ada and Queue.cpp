#include <iostream>
#include <queue>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    ll q;
    cin >> q;
    deque <ll> dq;
    bool isreverse = false;
    while (q--)
    {
        string s;
        cin >> s;
        if (s == "toFront")
        {
            int n;
            cin >> n;
            if (isreverse)
            {
                dq.push_back(n);
            }
            else
            {
                dq.push_front(n);
            }
        }
        if (s == "push_back")
        {
            int n;
            cin >> n;
            if (isreverse)
            {
                dq.push_front(n);
            }
            else
            {
                dq.push_back(n);
            }
        }
        else if (s == "back")
        {
            if (dq.empty())
            {
                cout << "No job for Ada?\n";
                continue;
            }
            if (isreverse)
            {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
            else
            {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        }
        else if (s == "front")
        {
            if (dq.empty())
            {
                cout << "No job for Ada?\n";
                continue;
            }
            if (isreverse)
            {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
            else
            {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }
        else if (s == "reverse")
        {
            isreverse = !isreverse;
        }
    }
    return 0;
}