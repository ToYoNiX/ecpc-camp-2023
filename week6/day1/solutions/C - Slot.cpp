#include <iostream>
#include <set>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    string s;
    cin >> s;

    set <char> st;
    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        st.insert(s[i]);
    }

    if (st.size() == 1)
    {
        cout << "Won\n";
    }
    else
    {
        cout << "Lost\n";
    }

    return 0;
}