#include <iostream>
#include <algorithm>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    string s;
    getline(cin, s);
    while (toupper(s.back()) < 'A' ||  toupper(s.back()) > 'Z')
    {
        s.pop_back();
    }

    char c = tolower(s.back());
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    
    return 0;
}