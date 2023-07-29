#include <iostream>
#include <set>
using namespace std;
int main()
{
    set <char> st;
    int n;
    cin >> n;
    while(n--)
    {
        char i;
        cin >> i;
        i = tolower(i);
        st.insert(i);
    }
    if(st.size() == 26)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}