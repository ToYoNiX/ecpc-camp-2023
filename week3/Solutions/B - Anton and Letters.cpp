#include <iostream>
#include <set>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    string s;
    getline(cin, s);
    
    set <char> st;
    int n = s.size();
    while (n--)
    {
        if (s[n] >= 'a' && s[n] <= 'z')
        {
            st.insert(s[n]);
        }
    }
    
    cout << st.size() << '\n';
    return 0;
}