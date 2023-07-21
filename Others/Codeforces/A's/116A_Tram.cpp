#include <iostream>
using namespace std;
int main ()
{
    int stops = 0 , a = 0 , b = 0 , max = 0 , ans = 0;
    cin >> stops ;
    while (stops--)
    {
        cin >> a >> b;
        
        max = max + b - a;
        if (ans < max)
        {
            ans = max;
        }
    }
    cout << ans << endl;
    return 0;
}