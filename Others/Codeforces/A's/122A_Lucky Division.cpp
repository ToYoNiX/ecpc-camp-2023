#include <iostream>
using namespace std;
int main ()
{
    int input = 0 , input_bk = 0;
    cin >> input;
    input_bk = input;
    int digits = 0 , lucky_digits = 0;
    
    while (input)
    {
        if(input % 10 == 4 || input % 10 == 7 )
        {
            lucky_digits++;
        }
        input /= 10;
        digits++;
    }
    if(
        digits == lucky_digits ||
        input_bk % 4 == 0 || 
        input_bk % 7 == 0 ||
        input_bk == 799)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
    return 0;
}