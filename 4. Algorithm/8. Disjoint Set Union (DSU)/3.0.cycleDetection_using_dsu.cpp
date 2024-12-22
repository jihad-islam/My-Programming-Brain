/*
    1. dsu use kore undirected graph er cycle detect kora jay (directed e dsu kaj kore na). and eta easiest way. cp te undirected graph er cycle detect korar proyojon hole dsu use korbo.

    2. process of detecting cycle using dsu: dsu te duita alada unconnected vertex er leader vinno hoy. but leader jodi same hoye jay then tara aage thekei same group e ase and ekhn connect korle cycle hobe. bishoyta aaro valo moto bujhte video dekhte hobe.

    amra jokhon new kono vertex ke group e add kori, sheta leader er sathe add kori. that means group er leader tai new vertex er leader hoye jay. but new vertex ta group e add korar shomoy jodi dekhi new vertex er leader aage thekei group er leader, that means new vertex aage thekei group e add ase. ekhn abar leader er sathe connect korle cycle hobe.

    abar ami jodi leader bad e normal duita vertex ke connect kori. then dekhbo tader leader same kina, jodi same hoy tara aage thekei same group e exist kortese, so eder connect korlew cycle hobe. ei logic er jonnei dsu just 2 ta vertex connect korle cycle detect kore na (amra jani cycle hoite hoile minimum 3 ta node lagbe).

6 6

0 1
0 2
0 3
3 4
3 5
4 5

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

int main()
{
    int n, e;
    cin >> n >> e;
    dsu_initialize(n);
    bool cycle = false;

    // while (e--)
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;

        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);

        if (leaderA == leaderB) // ekhane ekta basic ase. ami cycle detect howar poro break kori nai. karon break korle full input nito na. tokhon error khabo. amake full input nite hobe.
            cycle = true;

        else
            dsu_union_by_size(a, b);
    }

    if (cycle)
        cout << "Cycle found" << endl;

    else
        cout << "Cycle not found" << endl;

    return 0;
}