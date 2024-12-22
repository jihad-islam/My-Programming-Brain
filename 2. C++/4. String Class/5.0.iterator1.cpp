// string er protita character er kache access korbo. but eta basic. amra eta use korbo na.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) // ami ekta string nibo. then string er 0 tomo index theke sesh porjonto loop chalabo.
    {
        cout << s[i] << endl; // protita character print korbo
    }

    return 0;
}