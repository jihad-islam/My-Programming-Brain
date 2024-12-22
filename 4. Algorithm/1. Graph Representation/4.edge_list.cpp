/*
    1. graph amra jevabe input nei ovabei output dekhabo. orthat node or edge gula output dekhabo. edge list use kore cost ow rakha jay. tokhon class use korte hoy.

    2. algorithms that uses edge list: bellmanford, dsu cycle, mst.

6 6
0 1
1 5
0 4
0 3
3 4
2 4

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<pair<int, int>> v;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    // for (pair<int, int> p : v)
    for (auto p : v)
        cout << p.first << " " << p.second << endl;

    /*
    for (int i = 0; i < v.size(); i++)
            cout << v[i].first << " " << v[i].second << endl;

    */

    return 0;
}