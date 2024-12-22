// protita word ke reverse e print kora lagbe. but ei code ekta  problem holo last word print er pore ekta space print hoy. tai codeforces e accept korbe na. but vscode er tastcase pass hoye jabe.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);

    string w;

    while (ss >> w)
    {
        for (auto a = w.rbegin(); a < w.rend(); a++)
        {
            cout << *a;
        }

        cout << " ";
    }

    return 0;
}
