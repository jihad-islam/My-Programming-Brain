/*
    1. SSSP(single source shortest path) -> bfs, dijkstra, bellmanford
       APSP(all pair shortest path) -> floyd warshall algorithm

    2. sssp te just ekta source theke amra kono vertex er shortest path ber kortam, but apsp use kore amra jekono vertex theke jekono vertex er shortest path ber korte parbo.

    3. etar complexity kharap howay(O(v*v*v)) eta temon ekta ashe na.

4 6

3 2 8
2 1 5
1 0 2
3 0 20
0 1 3
1 2 2

*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll v, e;
    cin >> v >> e;
    ll adj[v][v];

    /*
        adjacency matrix create korar age protita cell e value infinity kore rakhlam, memset diye infinity rakha jay na tai loop use korlam.
    */
    for (int i = 0; i < v; i++)
        for (int j = 0; j < v; j++)
        {
            adj[i][j] = INT_MAX;

            if (i == j)
                adj[i][j] = 0;
        }

    /*
        adjacency matrix create korlam. question e dewa thakle valo, na dewa thakle create kore newa lagbe.
    */
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a][b] = c;
    }

    /*
        1. concept of floyd warshall algorithm: ami i theke j vertex e jawar cost jodi i theke k and ke thek j jawar cost theke beshi hoy then adj[i][j] = adj[i][k] + adj[k][j]

        2. tc holo O(v*v*v)
    */
    for (int k = 0; k < v; k++)
        for (int i = 0; i < v; i++)
            for (int j = 0; j < v; j++)
                if (adj[i][k] + adj[k][j] < adj[i][j]) // condition e duita infinity sum hoite pare tai datatype long long newa lagbe
                    adj[i][j] = adj[i][k] + adj[k][j];

    // printing floyd warshall
    cout << "After updating adjacency matrix using floyd warshall:" << endl;
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            if (adj[i][j] == INT_MAX)
                cout << "INF ";
            else
                cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    // detecting negative cycle
    for (int i = 0; i < v; i++)
        if (adj[i][i] < 0)
        {
            cout << "Cycle detected" << endl;
            break;
        }

    return 0;
}