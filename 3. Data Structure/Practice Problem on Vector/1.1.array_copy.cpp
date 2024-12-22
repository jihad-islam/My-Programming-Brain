// array copy using basic

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n], b[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int ans[2 * n];

    for (int i = 0; i < n; i++)
        ans[i] = b[i];

    int i = n;
    for (int j = 0; j < n; j++)
    {
        ans[i] = a[j];
        i++;
    }

    for (int i = 0; i < 2 * n; i++)
        cout << ans[i] << " ";

    return 0;
}
