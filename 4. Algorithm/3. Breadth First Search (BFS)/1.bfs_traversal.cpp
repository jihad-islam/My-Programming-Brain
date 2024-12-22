/*
    1. BFS holo graph traverse er ekta algorithm. tree traverse er jonne jemon preorder, postorder, levelorder ase temoni graph traverse er jonne BFS, DFS algorithm use kora hoy.

    2. bfs use kore duita jinish kora jay. 1) traversal er maddhome graph er protita vertex level wise print kora jay. 2) ekta vertex theke arekta vertex er shortest path print kora jay.
       amra ei code e level wise protita vertex ke print korsi.

    3. BFS level order e vertex visit kore and ekta vertex theke arekta vertex er shortest path ber kore ane. BFS directed, undirected, weighted shob graph ei use kora jay. ekhane just undirected graph dekhano hoise.

    4. graph er node gulare vertex bole and oi vertex er connected node ke adjacent vertex bole. arekta jinish mathay rakha lagbe, tree ow kintu graph er moddhe pore. so graph ew node use kora hoy.

    5. graph e kono parent, children and node nai. parent, children thake tree te. but bojhar jonne ami graph e parent and children dhore nisi. source node ta hobe parent and source node er sathe connected node gulo ke children hishebe dhore nisi.

    6. BFS e ekta source theke traversal shuru hoy. tai ekta source diye dewa lage. tai BFS ke single source shortest path ow bola hoy.

5 6
0 1
1 2
0 4
1 3
2 0
3 4
0 (source)

*/

#include <bits/stdc++.h>
using namespace std;

/*
    1e3 ke c++ double(1000.0) hisebe consider kore. tai array er size e sorasori 1e3 use kora jabe na. karon array er size double hoite pare na. tai 1e3 ke aage integer variable er moddhe rekhe dilam, karon kono double ba float ke int variable er moddhe rakhle shudhu int value ta store hoy. r constant variable means eitar value r change kora jabe na.
*/
const int size = 1e3 + 5;

vector<int> arr[size]; // ei vector er size hobe graph er maximum node shonkhar shoman. question theke aagei dekhe nibo maximum koyta node thakbe.

bool vis[size]; // same size er arekta array nilam. by default false thakbe, jokhoni visited hobe true hoye jabe.

void bfs(int src)
{
    queue<int> q;
    q.push(src); // source holo ekta vertex, jehetu vertex int type tai queue taw int er hobe.

    vis[src] = true; // source er index e jaya true kore dilam. that means visited.

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        cout << par << " ";

        for (auto child : arr[par])
            if (!vis[child]) // vis[child] jodi true na hoy then condition e dhukbe. that means visited howa jabe na.
            {
                q.push(child);
                vis[child] = true;
            }
    }
}

int main()
{
    int v, e;
    cin >> v >> e;

    // adjacent list er code. list use kore graph input nilam.
    while (e--)
    {
        int a, b;
        cin >> a >> b;

        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    memset(vis, false, sizeof(vis)); // globally jei array ta declare korsi oitar shob value false kore disi.

    int src; // graph input newar por source input nisi. question e aage source diye dile aage input nibo. source holo kon node theke traversal start korbo oita.
    cin >> src;

    bfs(src); // source pathay dibo.

    return 0;
}

/*

void bfs(int src)
{
    queue<int> q;
    q.push(src);

    vis[src] = true;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        cout << par << " ";

        // method 1
        for (int i = 0; i < arr[par].size(); i++)
        {
            int child = arr[par][i];
            cout << child << endl;
        }

        // method 2
        for (auto child : arr[par])
        {
            cout << child << endl;
        }
    }
}

*/