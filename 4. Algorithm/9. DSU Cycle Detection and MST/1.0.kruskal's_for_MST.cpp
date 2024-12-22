/*
    1. mst holo graph er algorithm. ei algorithm ta ekta graph ke tree te convert kore (tree itself is a graph). etar reason oi graph er total cost minimize kora. so in summary mst ekta graph ke tree te convert kore oi graph er cost minimize kore.

    ekhane ekta jinish note korte hobe. parent theke cost minimize kore. eta video dekhe khatay note korte hobe.

    2. mst kivabe graph ke tree te convert kore? graph e multiple edge thakte pare, but tree te egde thake ekta. mst graph er multiple edge ke remove kore dey.

    3. duita algorithm use kore mst create kora jay. kruskal's algorithm and prim's algorithm. kruskal's algorithm dsu use kore and prim's algorithm edge use kore. ei code e kruskal's algorithm use kore mst banano hoise. prim's ta nije dekhe nite hobe.

    4. kruskal's algorithm prothome weighted graph er edge guloke cost er vittite ascending order e sort kore. then edge gulote jei duita vertex thake tara jodi group e connected na thake then tader group e connect kore and aage thekei jodi group e connected thake tahole ignore kore. evabei minimum cost er tree or graph pawa jay.

    5. ekhane amra shobgulo vertex ke shomcheye kom koto cost e connect kora jay eta ber kortesi. amra totalcost jeta print kortesi oitai minimum cost.

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

const int N = 1e5 + 5;
int parent[N];
int group_size[N];

void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}

int dsu_find(int node)
{
    if (parent[node] == -1)
        return node;

    int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}

void dsu_union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);

    if (group_size[leaderA] > group_size[leaderB])
    {
        parent[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else
    {
        parent[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
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

int main()
{
    int n, e;
    cin >> n >> e;

    dsu_initialize(n);

    vector<edge> v;

    while (e--)
    {
        int a, b, c; // a,b vertices and c holo cost.
        cin >> a >> b >> c;
        v.push_back(edge(a, b, c));
    }

    /*
        1. sort function onek vabe likha jay. ami jodi normal or single data type(int,double,etc) sort kortam then sort(v.begin(), v.end()); evabe likhtam. but custom data type(pair,class,etc) sort korar jonne sort function e ekta compare function add kora lage.

        2. ami ekhane ascending order orthat weight choto theke boro te sort kortesi. cmp amake true or false return dibe. duita edge er moddhe prothom ta jodi choto hoy then true return dibe and amar sort korar dorkar nai. but prothom ta boro hoile amake false return dibe and sort korte hobe.
    */
    sort(v.begin(), v.end(), cmp);

    int totalCost = 0;

    for (edge ed : v)
    {
        int leader1 = dsu_find(ed.a);
        int leader2 = dsu_find(ed.b);

        /*
            duita vertex er leader jodi same hoy tahole tara already same group e ase. eije same group e thakle group e notun kore add kortesi na. ete cycle hobe na. and total cost ow minimum hobe. evabei mst te minimum cost pawa jay.  but ami jokhon graph input nibo tokhon kintu cycle soho input nitesi, that means same group e thakar poro oi vertex again group e add korai chilo.
        */
        if (leader1 == leader2)
            continue;

        else
        {
            dsu_union_by_size(ed.a, ed.b);
            totalCost += ed.c;
        }
    }

    cout << totalCost << endl;

    return 0;
}
