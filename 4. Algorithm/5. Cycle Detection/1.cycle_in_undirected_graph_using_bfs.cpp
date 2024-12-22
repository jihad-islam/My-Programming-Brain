/*
    1. undirected graph e duita vertex eke oporer dike point kore thake, tai undirected e duita vertex wala graph always cycle e thake. ejonne undirected graph er jonne cycle hoite hoile minimum 3 ta vertex thakte hobe.

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

vector<int> arr[N];
bool vis[N];

int parentArray[N];
bool flag;

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : arr[par])
        {
            /*
                cycle er jonne duita condition. i) parent er child vertex ta visited hote hobe and ii) jei child vertex niye kaj kortesi oi vertex er parent oi nije hoite parbe na, orthat nijei nijer parent hoite parbe na.

                second condition ta bujhte bohut kosto hoise. revision dewar shomoy na bujhle khatay eke bujhte hobe. and second condition ta duita jinish kore i) duita vertex e cycle detect kore na. duita vertex thakle parent and children same hoye jay.  ii) dui er odhik vertex e cycle thakle traversal ta infinity loop e chole jabe, second condition ta ei infinity loop ta terminate kore dey.
            */
            if (vis[child] and parentArray[par] != child)
                flag = true;

            if (!vis[child])
            {
                vis[child] = true;
                q.push(child);

                parentArray[child] = par;
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
        int a, b;
        cin >> a >> b;

        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(parentArray, -1, sizeof(parentArray));
    flag = false;

    /*
        ekhane fixed kono source vertex theke bfs chalano hoy nai. jei koyta vertex ase shobgulo theke bfs chalano hoiche. and dhore newa hoise total vertex jodi 5 ta thake then vertex gulo hobe 0,1,2,3,4.
    */
    for (int i = 0; i < v; i++)
        if (!vis[i])
            bfs(i);

    if (flag)
        cout << "Cycle found";

    else
        cout << "Cycle not found";

    return 0;
}