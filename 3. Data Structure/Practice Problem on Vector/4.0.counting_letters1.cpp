// vector use kore kivabe character input newa jay shikhe rakhte hobe.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a;
    vector<char> v;

    while (cin >> a) // EOF
        v.push_back(a);

    vector<int> count(26, 0);

    for (int i = 0; i < v.size(); i++)
        count[v[i] - 'a']++;

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
            cout << char(i + 'a') << " : " << count[i] << endl; // type casting kora hoise. kivabe kora hoiche dekhe rakho.
    }

    return 0;
}
