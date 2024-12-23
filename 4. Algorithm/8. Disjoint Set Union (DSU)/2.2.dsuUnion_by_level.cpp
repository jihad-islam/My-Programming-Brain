/*
    1. ekhane jei group er level beshi shei group leader hobe. starting node or vertex er level 0 hoy.

    2. kom level er group ta beshi level er group er under e chole ashe. and then boro group tar levle bare na. but important is duita group er level equal hoile jekono ekta group onno ekta group er under e gelei hoy, but then oi group er level 1 bere jay.( ekhane jei code kora hoiche, level equal hoile 2nd group ta leader hobe. )

    3. lelel joto kom hobe find er operation toto kom lagbe. find e path compression kore, union ta group or level jekono ekta diye korlei hobe. duitari complexity same.
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int par[N];
int level[N];

void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        level[i] = 0;
    }
}

int dsu_find(int node)
{
    if (par[node] == -1)
        return node;

    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}

void union_by_level(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);

    if (level[leaderA] > level[leaderB])
        par[leaderB] = leaderA;

    else if (level[leaderB] > level[leaderA])
        par[leaderA] = leaderB;

    else
    {
        par[leaderA] = leaderB;
        level[leaderB]++;
    }
}

int main()
{
    dsu_initialize(7);
    union_by_level(1, 2);
    union_by_level(2, 3);
    union_by_level(4, 5);
    union_by_level(5, 6);
    union_by_level(1, 4);

    cout << dsu_find(1) << endl;
    cout << dsu_find(4) << endl;

    return 0;
}