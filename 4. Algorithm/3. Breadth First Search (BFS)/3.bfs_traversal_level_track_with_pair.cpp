/*
    1. same code eta just pair diye track rakhsi.

    2. graph:   10 10 (node and edges)

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

                0 (source)
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool vis[1005];

void bfs(int src, int des)
{
    queue<pair<int, int>> q; // vertex and level pair hishebe rakhbo
    q.push({src, 0});

    vis[src] = true;
    bool found = false; // eita newa hoise source theke desire vertex e jawa na gele -1 show korbe.

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int par = p.first;
        int level = p.second;

        // cout << par << endl;

        if (par == des)
        {
            cout << level << endl;
            found = true;
        }

        for (int child : v[par])
        {
            if (vis[child] == false)
            {
                q.push({child, level + 1});
                vis[child] = true;
            }
        }
    }

    if (found == false) // -1 show korbe jodi source and desire vertex connected na thake
    {
        cout << -1 << endl;
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

    int src;
    cin >> src;

    memset(vis, false, sizeof(vis));

    bfs(src, 9); // source vertex theke 9 no vertex e jete chai. level dekhabe. jodi source theke vertex jawa na jay, orthat jodi connected na thake then -1 dekhabe.

    return 0;
}