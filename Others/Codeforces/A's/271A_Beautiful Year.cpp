#include <iostream>
using namespace std;
bool isdistinct(int);
bool isdistinct(int input)
{
    int ones , tens , hunderds , thousands ;
    ones = input % 10;
    tens = (input % 100) / 10;
    hunderds = (input % 1000) / 100;
    thousands = (input % 10000) / 1000;

    if(
        ones != tens &&
        ones != hunderds &&
        ones != thousands &&

        tens != ones &&
        tens != hunderds &&
        tens != thousands &&

        hunderds != ones &&
        hunderds != tens &&
        hunderds != thousands &&

        thousands != ones &&
        thousands != tens &&
        thousands != hunderds
    )
        return true;

    return false;
}
int main()
{
    int input = 0 ;
    cin >> input ;
    input += 1;

    while (!isdistinct(input))
    {
        input += 1;
    }

    cout << input << "\n";

    return 0;
}
