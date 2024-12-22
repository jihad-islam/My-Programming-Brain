// eita infinity string input nibe. amake alphabetic order e print kora lagbe. eita amare onek pera disilo.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[100001];

    while (cin.getline(a, 100001))
    {

        int n = strlen(a);
        sort(a, a + n);

        for (int i = 0; i < n; i++)
        {
            if (a[i] != ' ')
            {
                cout << a[i];
            }
        }

        cout << endl;
    }

    return 0;
}