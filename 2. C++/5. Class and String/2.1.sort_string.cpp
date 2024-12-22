// space soho sort korar try korsilam but pari nai

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    // cin >> s;
    getline(cin, s);

    sort(s.begin(), s.end());

    for (auto a = s.begin(); a < s.end(); a++)
    {
        if (*a != ' ')
            cout << *a << endl;
    }

    // cout << s << endl;

    return 0;
}