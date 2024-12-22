// this is palindrome array. er aage  palindrome string korsi.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int j = n - 1;
    int i = 0;
    int count = 0;

    while (i < j)
    {
        if (a[i] != a[j])
        {
            count = 1;
            break;
        }
        i++;
        j--;
    }

    if (count == 0)
        cout << "YES";

    else
        cout << "NO";

    return 0;
}
