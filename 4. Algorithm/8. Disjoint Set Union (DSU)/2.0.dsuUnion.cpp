/*
    1. union er kaj holo duita group merge kore duita group er leader ke same kora.

    2. ekhane duita group bolte duita alada alada array bujhaitese na. same array tei duita alada group thakbe. alada group means koyekta node er leader same. then abar koyekta node er onno leader.

    3. union dui vabe kora jay. ek holo union by size and arekta holo uinion by level.

    4. ekhane dsu_uinion() er general function ta build kora hoise, just concept clear korar jonne. amra union by size or union by level use korbo. but eta concept clear er jonne lagbe.

    1st group: 1->2->3, 2nd group: 5->6->7.
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int par[N];

void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
        par[i] = -1;

    par[1] = 2;
    par[2] = 3;
    par[5] = 6;
    par[6] = 7;
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
    1. duita leader er moddhe ke sacrifice korbe eta amra size and level dekhe nirdharon korbo. but ekhane mon moto kora hoise, karon ekhane basic bujhtesi.
*/
void dsu_union(int node1, int node2) // suppost ekhane no 1 and 5 ashlo. 1 er leader 3. 5 er leader 7.
{
    int leader1 = dsu_find(node1); // 3
    int leader2 = dsu_find(node2); // 7
    par[leader1] = leader2;        // 7
}

int main()
{
    dsu_initialize(8);
    dsu_union(1, 5); // etar maddhome ami leader same kore dilam

    cout << dsu_find(1) << endl;
    cout << dsu_find(5) << endl;

    return 0;
}