#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list thek list copy. O(n).
    list<int> L1 = {1, 2, 3, 4, 5};
    list<int> L2(L1); // L1 er shob value L2 te copy korlam. tc: O(n)

    for (int val : L2)
    {
        cout << val << endl;
    }

    // array theke list e copy. O(n).
    int a[5] = {10, 20, 30, 40, 50};
    list<int> myList(a, a + 5); // array copy korte array er prothom index er address and last index er address dite hoy. ekhane array size 5 tai last index a+5 hoiche. jodi array size n hoito, taile last index a+n hoito.
    for (int val : myList)
    {
        cout << val << endl;
    }

    // vector theke list e copy. O(n).
    vector<int> v = {100, 200, 300};
    list<int> myList1(v.begin(), v.end()); // vector copy er khetre vector er shurur pointer or address and shesh pointer or address dite hoy.

    for (int val : myList1)
    {
        cout << val << endl;
    }

    return 0;
}