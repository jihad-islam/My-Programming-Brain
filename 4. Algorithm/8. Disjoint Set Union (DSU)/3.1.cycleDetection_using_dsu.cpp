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

int find(int node)
{
    if (par[node] == -1)
        return node;

    int l = find(par[node]);
    par[node] = l;
    return l;
}

void union_level(int node1, int node2)
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
    bool cycle = false;

    while (n--)
    {
        int a, b;
        cin >> a >> b;

        if (find(a) == find(b))
            cycle = true;

        else
            union_level(a, b);
    }

    if (cycle)
        cout << "Yes" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
