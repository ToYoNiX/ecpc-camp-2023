#include <iostream>
#include <set>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    int n, m;
    cin >> n >> m;
    set <int> st;
    
    while (n--)
    {
        int x;
        cin >> x;
        while (x--)
        {
            int y;
            cin >> y;
            st.insert(y);
        }
    }

    if (st.size() == m)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}