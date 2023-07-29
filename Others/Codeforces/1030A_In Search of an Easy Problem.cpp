#include <iostream>
using namespace std;
int main ()
{
    bool ishard = false;
    int c;
    cin >> c;
    while (c--)
    {
        int i = 0;
        cin >> i;
        if(i)
        {
            ishard = true;
            break;
        }
    }
    if(ishard)
    {
        cout << "HARD\n";
    }
    else
    {
        cout << "EASY\n";
    }
    return 0;
}
