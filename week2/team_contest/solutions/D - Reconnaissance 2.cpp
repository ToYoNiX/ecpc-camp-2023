#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    int n;
    cin >> n;
    vector <int> vec;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        vec.push_back(a);
    }
    
    int a = 0, b = n - 1, min = abs(vec[0] - vec[n - 1]);
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(vec[i] - vec[i + 1]) < min)
        {
            min = abs(vec[i] - vec[i + 1]);
            a = i;
            b = i + 1;
        }
    }
    cout << ++a << ' ' << ++b << '\n';
    
    return 0;
}