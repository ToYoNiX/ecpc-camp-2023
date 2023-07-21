#include <iostream>
#include <set>
#include <queue>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    int n, p, q;
    cin >> n;
    set <int> st;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int input;
        cin >> input;
        st.insert (input);
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int input;
        cin >> input;
        st.insert (input);
    }
    int s = st.size();
    if (s == n)
    {
        cout << "I become the guy.\n";
    }
    else
    {
        cout << "Oh, my keyboard!\n";
    }
    return 0;
}