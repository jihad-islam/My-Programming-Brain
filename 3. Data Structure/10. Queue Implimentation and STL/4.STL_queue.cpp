#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    int n;
    cin >> n;
    // for (int i = 0; i < n; i++)
    while (n--)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    cout << q.size() << endl; // jodi size lage use korbo. na lagle korbo na.

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}