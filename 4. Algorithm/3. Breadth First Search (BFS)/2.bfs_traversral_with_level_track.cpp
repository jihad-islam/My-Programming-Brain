/*
    1. bfs traversal er ekdom same code, but etay level track rakha hoise.

    2. graph:

10 10

0 1
1 2
0 4
1 3
2 0
3 4
1 5
3 6
7 8
8 9

0

*/

#include <bits/stdc++.h>
using namespace std;

const int size = 1e3 + 5;

vector<int> arr[size];
bool vis[size];
int level[size]; // same size er level track rakhar array nilam

void bfs(int src)
{
    queue<int> q;
    q.push(src);

    vis[src] = true;
    level[src] = 0; // source er level 0 fixed kore dilam

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : arr[par])
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1; // connected vertex er level ek barbe. ei loop e tokhoni dhukbe jokhon vertex ta unvisited thakbe. karon ekta vertex multiphle vertex er sathe connected thakte pare, jodi jodi visited kina ei condition ta check na kortam tahole level barbar bere jeto.
            }
    }
}

int main()
{
    int v, e;
    cin >> v >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    int src;
    cin >> src;

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level)); // initially shobgula vertex er level -1 kora hoise. eta na korlew chole. but emon kono vertex jodi thake jeta onno vertex er sathe connected na, tokhon oi vertex er level gerbage value show korbe.

    bfs(src);

    for (int i = 0; i < v; i++) // bfs er moddhe r parent ke print korbo na. main function e level soho parent print korbo. vertex jei koyta loop totobar cholbe.
        cout << i << " " << level[i] << endl;

    return 0;
}
