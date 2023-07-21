#include <iostream>
#include <stack>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    int n;
    cin >> n;
    getchar();
    while (n--)
    {
        stack <char> st;
        string s;
        getline(cin, s);

        int strsize = s.size();
        for (int i = 0; i < strsize; i++)
        {
            if (st.empty())
            {
                st.push (s[i]);
            }
            else if((s[i] == ')' && st.top() == '(') || (s[i] == ']' && st.top() == '['))
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
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}