#include <iostream>
#include <queue>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    string s;
    cin >> s;
    priority_queue <ll> pq;
    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        if (s[i] == '+')
            continue;
        pq.push(-(s[i] - '0'));
    }
    size = (size + 1) / 2;
    cout << -pq.top();
    pq.pop();
    size--;
    while (size--)
    {
        cout << '+' <<-pq.top();
        pq.pop(); 
    }
    return 0;
}