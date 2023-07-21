#include <iostream>
using namespace std;
int main ()
{
    int n = 0, ans(0);
    cin >> n;
    while (n--)
    {
        int p, q;
        cin >> p >> q;
        if(q - p > 1)
        {
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}