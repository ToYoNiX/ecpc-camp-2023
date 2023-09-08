#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    string s;
    cin >> s;

    ll size = s.size();

    ll i = 0;
    while (s.back() == '0')
    {
        s.pop_back();
        i++;
    }
    
    i = size - i;

    bool isPalindrome = true;

    for (int c = 0 ; c < i / 2; c++)
    {
        if (s[c] != s[(i - 1) - c])
        {
            isPalindrome = 0;
            break;
        }
    }

    string o = isPalindrome ? "Yes" : "No";
    cout << o << '\n';

    return 0;
}