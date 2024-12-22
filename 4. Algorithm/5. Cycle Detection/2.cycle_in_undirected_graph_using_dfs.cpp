/*
input:

7 6

0 1
1 2
3 4
4 5
5 6
6 3
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
bool vis[N];
vector<int> adj[N];

int parentArray[N];
bool flag;

void dfs(int src)
{
    vis[src] = true;

    for (int child : adj[src])
    {
        if (vis[child] && child != parentArray[src])
            flag = true;

        if (vis[child] == false)
        {
            parentArray[child] = src;
            dfs(child);
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
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(parentArray, -1, sizeof(parentArray));
    flag = false;

    for (int i = 0; i < v; i++)
        if (!vis[i])
            dfs(i);

    if (flag)
        cout << "Cycle detected";
    else
        cout << "Cycle not detected";

    return 0;
}