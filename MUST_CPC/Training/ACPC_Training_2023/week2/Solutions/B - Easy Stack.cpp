#include <iostream>
#include <stack>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    ll t;
    cin >> t;
    stack <ll> st;
    while (t--)
    {
        ll q;
        cin >> q;
        if (q == 1)
        {
            ll n;
            cin >> n;
            st.push(n);
            continue;
        }
        else if (q == 2)
        {
            if (!st.empty())
            {
                st.pop();
                continue;
            }
        }
        else
        {
            if (st.empty()) 
            {
                cout << "Empty!\n";
                continue;
            }
            cout << st.top() << '\n';
        }
    }
    return 0;
}