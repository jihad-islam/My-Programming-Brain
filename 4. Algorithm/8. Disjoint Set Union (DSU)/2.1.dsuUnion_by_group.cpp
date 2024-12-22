/*
1. jevabe connect kora hoise-
                                1,2: ekhane 2 leader and 2 er group size hobe 2
                                2,3: ekhane 2 leader hobe jehetu 2 er group size boro. and finaly 2 er group size 3.

                                4,5: 5 will be leader
                                5,6: 5 will be leader

                                1,4: 1 er leader 2 and 4 er leader 5. jehetu duita group er size same tai 2nd group leader hobe. so final leader is 5.

2. find e jodi path compression kori and union by size kori then duita mile etar time complexity hoy O(alpha(n)), jeta  O(4) er kachakhachi. tobe worst case e O(logN) hote pare maybe.
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int par[N];
int group_size[N];

void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        group_size[i] = 1;
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

/*
    1. ei function ta emon vabe likha hoise je, duita group er size jodi equal hoy then second group er leader tai 2 ta group er leader hobe.
*/
void union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);

    if (group_size[leaderA] > group_size[leaderB])
    {
        par[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }

    else
    {
        par[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}

int main()
{
    dsu_initialize(7);

    // ekhane normally node connect korbo
    union_by_size(1, 2);
    union_by_size(2, 3);
    union_by_size(4, 5);
    union_by_size(5, 6);

    cout << endl
         << "before union of two groups:" << endl;
    cout << "leader of group 1: " << dsu_find(1) << endl;
    cout << "leader of group 2: " << dsu_find(4) << endl
         << endl;

    // ekhn 2 ta group create hoise. 2 ta group eri size same. tai duita group jodi union kori 2nd group er leader tai leader hobe
    union_by_size(1, 4);

    cout << "after union of two groups:" << endl;
    cout << "leader of group 1: " << dsu_find(1) << endl;
    cout << "leader of group 2: " << dsu_find(4) << endl;

    return 0;
}