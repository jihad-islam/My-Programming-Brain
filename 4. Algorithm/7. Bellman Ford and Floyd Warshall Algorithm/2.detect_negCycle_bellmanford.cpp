/*
    1. negative cycly thakle kono vertex eri minimum cost pawa  possible na, karon graph ta always update hoite thakbe. tai negative cycle thakle oi graph er kono answer nai.

    2. neg cycle detect korar way: bellman ford algorithm e n shongkhok vertex er jonne n-1 times iterate hoye vertex er distance update hoy. jodi n-1 er porew itaration cholte thake that means shekahne cycle ase.

    3. in theory ekta graph er total cost er sum jodi negative hoy then oi graph e negative cycle ase(maybe, not sure)

with cycle:
3 3
0 1 -1
1 2 2
2 0 -3

no cycle:
4 4

0 2 5
0 3 12
2 1 2
1 3 3

*/

#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

const int N = 1e5 + 5;
int dis[N];

int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> EdgeList;

    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));

        // undirected graph hole nicher line ta add korbo
        // EdgeList.push_back(Edge(v, u, c));
    }

    for (int i = 0; i < n; i++)
        dis[i] = INT_MAX;

    dis[0] = 0;

    for (int i = 1; i <= n - 1; i++) // n-1 times loop chalailam
    {
        for (Edge ed : EdgeList)
        {
            int u, v, c;
            u = ed.u;
            v = ed.v;
            c = ed.c;
            if (dis[u] < INT_MAX && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }

    bool cycle = false;

    for (Edge ed : EdgeList) // then arekbar path relax korbo jodi hoy then cycle ase
    {
        int u, v, c;
        u = ed.u;
        v = ed.v;
        c = ed.c;
        if (dis[u] < INT_MAX && dis[u] + c < dis[v])
        {
            cycle = true;
            break;
        }
    }

    if (cycle)
        cout << "Cycle found. No answer" << endl;

    else
        for (int i = 0; i < n; i++)
            cout << i << " -> " << dis[i] << endl;

    return 0;
}