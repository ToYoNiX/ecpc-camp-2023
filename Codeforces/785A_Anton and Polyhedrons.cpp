#include <iostream>
#include <map>
#define ll long long
using namespace std;
int main ()
{
    map <string, int> mp = {{"Tetrahedron", 4},
                            {"Cube", 6},
                            {"Octahedron", 8},
                            {"Dodecahedron", 12},
                            {"Icosahedron", 20}};
    
    ll i = 0, sum = 0;
    cin >> i;
    while(i--)
    {
        string s;
        cin >> s;
        sum += mp[s];
    }
    cout << sum << "\n";
    return 0;
}