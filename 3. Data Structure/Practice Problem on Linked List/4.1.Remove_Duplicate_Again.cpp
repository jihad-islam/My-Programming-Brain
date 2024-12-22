#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> L;
    int value;

    while (1)
    {
        cin >> value;

        if (value == -1)
            break;

        L.push_back(value);
    }

    L.sort();
    L.unique();

    for (int val : L)
    {
        cout << val << " ";
    }
    return 0;
}
