#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    s.pop_back();
    
    int hour = 0;
    hour += (s[0] - '0') * 10;
    hour += (s[1] - '0');
    
    if (hour == 12 && s[8] == 'A') {
        hour = 1;
    }
    else if (s[8] == 'P') {
        hour += 12;
    }
    hour = (hour == 24) ? 0 : hour;
    
    string t = to_string(hour);
    if (t.size() == 1) {
        s[0] = '0';
        s[1] = t[0];
    }
    else {
        s[0] = t[0];
        s[1] = t[1];
    }
    

    cout << t << ' ' << hour << '\n';

    s.pop_back();
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
