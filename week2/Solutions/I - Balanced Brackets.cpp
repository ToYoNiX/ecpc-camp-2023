#include <iostream>
#include <stack>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    ll n;
    cin >> n;
    while (n--)
    {
        stack <char> st;
        string s;
        cin >> s;

        ll strsize = s.size();
        for (int i = 0; i < strsize; i++)
        {
            if (st.empty())
            {
                st.push (s[i]);
            }
            else if((s[i] == ')' && st.top() == '(') || (s[i] == ']' && st.top() == '[') || (s[i] == '}' && st.top() == '{'))
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }

        if (st.empty())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}