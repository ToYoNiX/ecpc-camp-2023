#include <iostream>
using namespace std;
int main ()
{
    int friends = 0, hight = 0, ans = 0;
    cin >> friends >> hight;
    while (friends--)
    {
        int tall = 0;
        cin >> tall;
        if (tall <= hight)
        {
            ans += 1;
        }
        else
        {
            ans += 2;
        }
    }
    cout << ans <<endl;
    return 0;
}