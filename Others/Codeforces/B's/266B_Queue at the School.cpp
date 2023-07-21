#include <iostream>
using namespace std;
int main ()
{
    int n = 0 , t = 0;
    cin >> n >> t;
    string s;
    cin >> s;
    while (t--)
    {
        for (int i = 0 ; i < s.length() - 1 ; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                s[i] = 'G';
                s[i+1] = 'B';
                i++;
            }
        }
    }
    cout << s << endl;
    return 0;
}