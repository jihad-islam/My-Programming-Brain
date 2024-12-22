/*
5 7

0 1 2
0 2 3
0 3 3
3 4 6
2 4 4
2 1 7
1 4 5

*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define _test     \
    int _TEST;    \
    cin >> _TEST; \
    while (_TEST--)

const int N = 1e5;
int par[N];
int level[N];

void initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        level[i] = 0;
    }
}

class edge
{
public:
    int a, b, c;
    edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

bool cmp(edge a, edge b)
{
    return a.c < b.c;
}

int find(int node)
{
    if (par[node] == -1)
        return node;

    int l = find(par[node]);
    par[node] = l;
    return l;
}

void dsu_union(int node1, int node2)
{
    int l1 = find(node1);
    int l2 = find(node2);

    if (level[l1] > level[l2])
        par[l2] = l1;
    else if (level[l2] > level[l1])
        par[l1] = l2;

    else
    {
        par[l1] = l2;
        level[l2]++;
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    initialize(n);

    vector<edge> v;

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        v.push_back(edge(a, b, c));
    }

    sort(v.begin(), v.end(), cmp);

    int cost = 0;

    for (auto e : v)
    {
        int l1 = find(e.a);
        int l2 = find(e.b);

        if (l1 == l2)
            continue;

        else
        {
            dsu_union(e.a, e.b);
            cost += e.c;
        }
    }
    cout << cost << endl;

    return 0;
}
