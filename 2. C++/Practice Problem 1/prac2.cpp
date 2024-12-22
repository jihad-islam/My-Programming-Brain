// eita O.Sort problem. amake shurute bole dibe koyta character er array nibe. then oi character array or string take sort kore likha lagbe

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count[26] = {0};

    char a;
    while (cin >> a)
    {
        count[a - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < count[i]; j++)
        {
            char c = 'a' + i;
            cout << c;
        }
    }

    return 0;
}
