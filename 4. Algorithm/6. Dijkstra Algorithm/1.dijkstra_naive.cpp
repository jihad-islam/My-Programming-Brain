/*
    1. dijkstra algorithm ow single source shortest path ber korar algorithm as like bfs and dfs. bfs and dfs holo unweighted graph er jonne r dijkstra holo weighted graph er jonne.

    2. dfs and bfs er tc holo O(V+E), karon vertex gulo visit rakhto tai ekta vertex e ekbarer beshi visit korto na. and ekta edge e ekbari visit korto. but dijkstra te ekta vertex e ekadhik bar visit hoite pare tai dijkstra er complexity O(V+E) hobe na. dijkstra naive er complexity O(V*E), etar bekkha video dekhe nite hobe.

    3. duita vertex er moddhoborti value ke cost/weight dhorechi and source theke kono vertex e ashar total cost ke distance dhorechi. dijkstra use kore minimum distance ta ber korsi.

input:

5 8

0 1 10
0 2 7
0 3 4
1 4 3
2 4 5
2 1 1
3 4 5
3 2 1

*/

#include <bits/stdc++.h>
using namespace std;

const int sz = 100;
vector<pair<int, int>> arr[sz]; // aager array of vector e vector er type chilo int but ekhn pair. karon vertex er sathe cost ow thakbe.

int dis[sz]; // eta hocche distance array. ekahne protita vertex er updated minimum cost thakbe.

void dijkstra(int src)
{
    /*
        1. ei queue te vertex and current cost thakbe. current cost barbar update hoye distace array te final minimum cost thakbe.
        2. then queue te source push korbo. source er cost 0 dhorbo.
    */
    queue<pair<int, int>> q;
    q.push({src, 0});
    dis[src] = 0;

    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();
        int parNode = parent.first;
        int parCost = parent.second;

        for (pair<int, int> child : arr[parNode]) // ekhan theke child ta pair hishebe pabo that means node and cost
        {
            int childNode = child.first;
            int childCost = child.second;

            if (parCost + childCost < dis[childNode]) // path relax er condition
            {
                // path relax
                dis[childNode] = parCost + childCost;
                q.push({childNode, dis[childNode]});
            }
        }
    }
}

int main()
{
    int v, e;
    cin >> v >> e;
    while (e--)
    {
        /*
            node er sathe cost ow rakhbo. ekhane adj list use kore cost soho graph rakha hoise, chaile adj matrix ow use kora jaito, but adj matrix er complexity kharap.
        */
        int a, b, c;
        cin >> a >> b >> c;
        arr[a].push_back({b, c});
        arr[b].push_back({a, c});
    }

    for (int i = 0; i < v; i++) // memset diye INT_MAX assign kora jay na, tai loop use kore assign korsi.
        dis[i] = INT_MAX;

    dijkstra(0); // source

    for (int i = 0; i < v; i++) // ekhane protita vertex er shortest distance print korbo. vertex jodi 4 ta thake tahole vertex gulo hobe 0,1,2,3. tai evabe loop chalaya print kora jay.
        cout << i << "-> " << dis[i] << endl;

    return 0;
}