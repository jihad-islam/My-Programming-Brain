/*
    1.duita string dibe. 2nd string er word gulo 1st string er jekhane jekhane ase oikhane '#' boshaite hobe.

    2. s.find("o"); ei function jekhane jekhane 'o' pabe tar index return dibe. but string er ekadhik jaygay 'o' thakle just first 'o' er index back dibe. tai oi 'o' taake replace kore then abar 'o' er index pabo. and eita loop er moddhe kora lagbe.

    3. then index use kore replace function use korlei hobe.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s1, s2;

        cin >> s1;
        cin >> s2;

        int y = s2.size(); // second string er size ber korlam

        while (s1.find(s2) != -1) // jotokhon second string khuje pabe loop cholte thakbe
        {
            int x = s1.find(s2); // 2nd string khuje pele tar index ta 'x' e store hobe
            s1.replace(x, y, "#");
        }

        cout << s1 << endl;
    }

    return 0;
}
