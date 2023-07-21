#include <iostream>
#include <queue>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    priority_queue <int> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        pq.push(-input);
    }
    for (int i = 0; i < n; i++)
    {
        cout << -pq.top() << ' ';
        pq.pop();
    }
    return 0;
}