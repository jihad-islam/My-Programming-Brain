// assignment

#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> L1 = {10, 20, 30, 40, 50};
    list<int> L2;

    L2 = L1; // O(n). L2 list e L1 assign korlam.

    L2.assign(L1.begin(), L1.end()); // function use kore assignment. but function use na kora recommended.

    for (int val : L2)
    {
        cout << val << endl;
    }

    return 0;
}