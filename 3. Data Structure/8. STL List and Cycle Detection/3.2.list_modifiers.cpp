// more about insertion() function in list STL

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list e onno ekta list copy kora
    list<int> L1 = {10, 20, 30, 40, 50, 60, 70};
    list<int> newList = {100, 200, 300};

    L1.insert(next(L1.begin(), 3), newList.begin(), newList.end()); // tc holo O(n+k), n holo prothom list er iteration and k holo 2nd list er iteration. duita list er moddhe jar iteration beshi hobe, complexity oitar count hobe. so, complexity hobe O(n) or O(k).

    for (int val : L1) // newList er value L1 e copy korsi.
    {
        cout << val << endl;
    }
    cout << endl;

    // list e vector copy kora
    list<int> L2 = {10, 20, 30, 40, 50, 60, 70};
    vector<int> v = {600, 700, 800};

    L2.insert(next(L2.begin(), 3), v.begin(), v.end());

    for (int val : L2)
    {
        cout << val << endl;
    }
    cout << endl;

    // list e array copy kora
    list<int> L3 = {10, 20, 30, 40, 50, 60, 70};
    int a[3] = {500, 600, 700};

    L3.insert(next(L3.begin(), 3), a, a + 3);

    for (int val : L3)
    {
        cout << val << endl;
    }
    cout << endl;

    return 0;
}