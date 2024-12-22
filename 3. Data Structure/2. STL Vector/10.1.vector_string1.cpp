#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    cin.ignore(); // n input newar por new line ignore korlam

    vector<string> v(n); // vector er size initialize kore disi. so inside loop no need of push_back() function.

    for (int i = 0; i < n; i++)
    {
        getline(cin, v[i]); // jehete size uporei initialize kore disi tai shorashori string input nite parbo
        // ekhane cin.ignore() use na korar reason hocche protibar newline dewar por aager ta string hishebe count kortese. tai new line ta kono value create kortese na.
    }

    for (string val : v)
    {
        cout << val << endl;
    }

    return 0;
}