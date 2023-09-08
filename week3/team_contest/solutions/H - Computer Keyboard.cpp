#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    char c, keyboard [100] = {"qwertyuiopasdfghjkl;zxcvbnm,./"};
    
    cin >> c;

    string s;
    cin >> s;
    int strsize = s.size();

    if (c == 'R')
    {
        for (int i = 0; i < strsize; i++)
        {
            for (int j = 0; j < 30; j++)
            {
                if (s[i] == keyboard[j])
                {
                    cout << keyboard[j - 1];
                    break;
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < strsize; i++)
        {
            for (int j = 0; j < 30; j++)
            {
                if (s[i] == keyboard[j])
                {
                    cout << keyboard[j + 1];
                    break;
                }
            }
        }
    }

    cout << '\n';
    return 0;
}