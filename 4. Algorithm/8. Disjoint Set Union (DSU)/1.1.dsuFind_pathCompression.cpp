/*
    1. eta optimized version eta use korbo.

    parent array:   -1 2  3  4
                     0 1  2  3
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int par[N];

void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
        par[i] = -1;

    par[1] = 0;
    par[2] = 1;
}

/*
    O(logN). eta optimized. etar complexity average e O(logN) hoy. ager tar complexity O(n).
*/
int dsu_find(int node)
{
    if (par[node] == -1)
        return node;

    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}

int main()
{
    dsu_initialize(4);

    cout << dsu_find(0) << endl;
    cout << dsu_find(1) << endl;
    cout << dsu_find(2) << endl;
    cout << dsu_find(3) << endl;

    return 0;
}