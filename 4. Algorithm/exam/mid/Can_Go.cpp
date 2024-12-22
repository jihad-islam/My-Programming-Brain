#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define _test     \
    int _TEST;    \
    cin >> _TEST; \
    while (_TEST--)

const ll sz = 1005;
vector<pair<ll, ll>> arr[sz];

ll dis[sz];

void dijkstra(ll src)
{

    queue<pair<ll, ll>> q;
    q.push({src, 0});
    dis[src] = 0;

    while (!q.empty())
    {
        pair<ll, ll> parent = q.front();
        q.pop();
        ll parNode = parent.first;
        ll parCost = parent.second;

        for (pair<ll, ll> child : arr[parNode])
        {
            ll childNode = child.first;
            ll childCost = child.second;

            if (parCost + childCost < dis[childNode])
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
    ll v, e;
    cin >> v >> e;
    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        arr[a].push_back({b, c});
    }

    for (ll i = 1; i <= v; i++)
        dis[i] = 1e18;

    ll src;
    cin >> src;

    dijkstra(src);

    _test
    {
        ll x, y;
        cin >> x >> y;

        if (dis[x] <= y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}