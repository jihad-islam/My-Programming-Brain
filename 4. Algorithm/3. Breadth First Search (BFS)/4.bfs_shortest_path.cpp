/*
    1. bfs use kore source vertex theke jekono vertex e jawar shortest path print korbo.

    2. bfs er use case mainly unweighted grap er distance, path etc ber kora. unweighted graph er shortest path ber kora.

    graph:  6 7 (vertex and edge)

            0 1
            1 2
            1 3
            2 4
            2 5
            4 5
            4 3

            0 (source)
            5 (destination)
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool vis[1005];
int level[1005];
int parent[1005]; // parent track rakhar jonne array nilam

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : v[par])
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par; // parent array er children er index e par ke rakhlam. par ta holo children er actual parent.
            }
        }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int src, des; // source and destination vertex input nilam
    cin >> src >> des;

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent)); // parent track rakhar array te shobaike -1 kore dilam

    bfs(src);

    int x = des;
    vector<int> path;

    while (x != -1) // path ta reverse kora lagbe tai vector e push kore nisi.
    {
        path.push_back(x);
        x = parent[x];
    }

    reverse(path.begin(), path.end());

    for (int val : path)
    {
        cout << val << " ";
    }

    return 0;
}