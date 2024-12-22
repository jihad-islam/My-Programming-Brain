/*
    1. bfs duita vertex er moddhe shortest path diye jay. but dfs kono shortest path diye jay na. bfs implementation kora jhamela, but dfs implementation kora easy karon recursion use kore. tai graph e jodi shortest path er proyojon na hoy then dfs use korbo. jemon amar jodi shobgula vertex er jogfol lage then amar shortest path diye jawar to kono proyojon nai then dfs use korbo.

    bfs and dfs duitar tc holo O(v+e). time complexity same howay duitai use kora jabe, just mathay rakha lagbe bfs shortest path e jay, dfs jei path shamne ashe oi path diyei jay.

    2. amra tree te level order and depth order traverse korsi. graph e level order traverse holo bfs and depth order traverse holo dfs.

    3. amra duita order e tree traverse korsilam, level order and depth order. graph ow same level order and depth order e traverse kora hoy. graph e level order e traverse hole bfs and depth order e traverse holo dfs. tree te depth order traverse er shomoy amra pre order, post order, in order e traverse korsilam, but graph e erokom na.

    4. ei code e amra graph er protita vertex print kortesi dfs use kore. ekta source nibo then children gulo print korbo.

graph:

6 6
0 1
0 2
0 3
1 4
3 5
3 2
0

*/

#include <bits/stdc++.h>
using namespace std;

const int size = 1e5 + 5; // 1e5 means 10^5. r global variable dekhe constant rakhsi.

vector<int> arr[size];
bool vis[size];

void dfs(int src)
{
    cout << src << endl;
    vis[src] = true; // ei jaygatay important theory ase. source er children er kache jawar aage source ke visited korte hobe. naile recursion call er maddhome infinity loop e traverse hobe. karon visit na kore dile source tar children er kache jabe then children soruce hoye abar tar children er kache jabe, evabe infinity loop hoye jabe.

    for (auto child : arr[src])
        if (!vis[child])
            dfs(child); // recursive call
}

int main()
{
    int v, e; // adjacency list use kore graph input
    cin >> v >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));

    int src;
    cin >> src;

    dfs(src);

    return 0;
}