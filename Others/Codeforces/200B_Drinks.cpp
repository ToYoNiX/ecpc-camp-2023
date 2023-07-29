#include <iostream>
#include <iomanip>
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    int n;
    cin >> n;
    double sum(0);
    for (int i = 0; i < n; i++)
    {
        double input;
        cin >> input;
        sum += input;
    }
    sum /= n;
    cout << fixed << setprecision(12) << sum;
    
    return 0;
}