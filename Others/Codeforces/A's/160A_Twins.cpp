#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue <int> pq;
    int n, sum(0), ans(0), number_of_coins(0);
    cin >> n;
    while(n--)
    {
        int i;
        cin >> i;
        sum += i;
        pq.push(i);
    }
    sum /= 2;
    while (ans <= sum)
    {
        ans += pq.top();
        pq.pop();
        number_of_coins++;
    }
    
    cout << number_of_coins << "\n";
    return 0;
}