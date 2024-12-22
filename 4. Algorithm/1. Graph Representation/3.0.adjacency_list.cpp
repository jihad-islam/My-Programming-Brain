/*
    1. adjacency matrix er maddhome ber kora hoy graph er duita node er majhe connection ase kina, and adjacency list er maddhome ber kora hoy ekta node er kon kon node er sathe connection ase. connection ta adjacency matrix er maddhomew ber kora jay but complexity beshi lage.

    2. weighted graph ow adj list diye represent kora jay. tokhon pair use korbo.

6 6
0 1
1 5
0 4
0 3
3 4
2 4
    */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v, e;
    cin >> v >> e;

    vector<int> arr[v]; // array size hobe vertex er maximum value. eikhane vertex jeikoyta maximum value ow toto tai vertex er shoman size niche.

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        // for undirected graph
        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    for (auto x : arr[0]) // 0 tomo index er value dekhtesi. eta actually vertex 0 kar kar sathe connected oita dekhabe. karon upore vertex ke index hishbe use korsi. and 0 tomo index e gele ekta vector pabo, then vector er value gula ke print kore dibo. porer for loop ta dekhle aro clear hobo.
        cout << x << " ";

    /*

     for (int i = 0; i < arr[3].size(); i++)
     {
         cout << arr[3][i] << " ";
     }

    */

    return 0;
}