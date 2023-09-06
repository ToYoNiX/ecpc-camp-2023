#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    bool ishate = 1;
    int n;
    cin >> n;
    string l = "that";
    for (int i = 0; i < n; i++)
    {
        string o = ishate ? "I hate " : "I love ";
        if (i == n - 1)
        {
            l = "it";
        }
        cout << o << l << ' ' ;
        ishate = !ishate;
    }
    return 0;
}