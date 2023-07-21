#include <iostream>
using namespace std;
int main () 
{
    string string , reverse , temp ;
    cin >> string ;
    cin >> reverse;
    temp = string;
    int l = string.length();
    for(int i = 0 , j = l - 1 ; i < l ; i++,j--)
    {
        temp[i] = reverse[j];
    }
    if (temp == string)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}