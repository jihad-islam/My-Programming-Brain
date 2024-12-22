/*
    1. tc = O(N+M); N and M both size 10^5. so tc is O(N).
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a[n];
    for (int i = 0; i < n; i++) // O(N)
        cin >> a[i];

    long long pre[n]; // prefix array
    pre[0] = a[0];

    for (int i = 1; i < n; i++) // O(N)
        pre[i] = a[i] + pre[i - 1];

    for (int i = 0; i < m; i++) // O(M)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;

        long long sum = 0;

        if (x == 0)
            sum = pre[y];
        else
            sum = pre[y] - pre[x - 1];

        cout << sum << endl;
    }

    return 0;
}
