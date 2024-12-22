/*
    1. single source shortest path(sssp) algorithm-
                - bfs: unweighted graph
                - dijkstra: weighted graph (path relax)
                - bellmanford: negative weighted graph with negative cycle (edge)

    2. bellman ford edge niye kaj kore

4 4

0 2 5
0 3 12
2 1 2
1 3 3

*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int dis[N];

class Edge
{
public:
    int a, b, weight;

    Edge(int a, int b, int weight) // constractor
    {
        this->a = a;
        this->b = b;
        this->weight = weight;
    }
};

int main()
{
    int v, e;
    cin >> v >> e;
    vector<Edge> vec;

    while (e--)
    {
        int a, b, weight;
        cin >> a >> b >> weight;
        vec.push_back(Edge(a, b, weight)); // directed graph
    }

    for (int i = 0; i < v; i++) // initially protita vertex er distance infinity
        dis[i] = INT_MAX;

    dis[0] = 0; // initially sorce er distance 0

        /*
         jodi n shonkok vertex thake tahole path relax cholbe n-1 bar. ekhane amra v shongkhon vertex nisi. tai path relax hobe v-1 times.
    */
    for (int i = 0; i < v - 1; i++) // path relax v-1 times
    {
        for (Edge ed : vec) // path relax 1 time
        {
            int a = ed.a;
            int b = ed.b;
            int weight = ed.weight;

            if (dis[a] < INT_MAX and dis[a] + weight < dis[b]) // condition of path relax
                dis[b] = dis[a] + weight;
        }
    }

    for (int i = 0; i < v; i++)
        cout << i << " -> " << dis[i] << endl;

    return 0;
}