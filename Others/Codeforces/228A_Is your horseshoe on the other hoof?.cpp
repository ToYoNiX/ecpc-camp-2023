#include <iostream>
#include <set>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    set <ll> st;
    for (int i = 0; i < 4; i++)
    {
        ll input;
        cin >> input;
        st.insert(input);
    }
    ll ans = 4 - st.size();
    cout << ans << '\n';
    return 0;
}