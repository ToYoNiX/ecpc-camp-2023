#include <iostream>
#include <algorithm>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    int y, w, ans;
    cin >> y >> w;
    
    ans = 6 - max(y, w);
    string o[] = {"1/6", "1/3", "1/2", "2/3", "5/6", "1/1"};
    cout << o[ans] << '\n';

    return 0;
}