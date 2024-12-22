#include <bits/stdc++.h>
using namespace std;

int main()
{

    int q;
    cin >> q;
    while (q--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        sort(s1.begin(), s1.end()); // string sort er function
        sort(s2.begin(), s2.end());
        if (s1 == s2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
