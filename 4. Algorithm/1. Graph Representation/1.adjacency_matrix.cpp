/*
    1. graph er node gulare vertex bole and oi vertex er connected node ke adjacent vertex bole. arekta jinish mathay rakha lagbe, tree ow kintu graph er moddhe pore. so graph ew node use kora hoy.

    2. ami ekta graph input dibo. graph kivabe input dibo eita khatay likha ase.

    3. adj matrix er maddhome duita vertex er moddhe connection ase kina or koto weight e connection ase eta O(1) complexity te ber kora jay. that means weighted graph ow adj matrix diye represent kora jay. weighted matrix er weight rakha hoy matrix e. oi code ta dekha lagbe.

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

    /*
    eijaygay matrix er size niye ektu kahini ase. matrix er size hobe vertices er maximum value er soman. suppose amar vertex ase 4 ta, but vertex er maximum size holo 100, then amar matrix er size hobe 100*100. but ei code e bojhar shubidarthe ami vertex nisi 6 ta and vertex er highest value ow 6 rakhsi. tai node er shoman matrix er size nisi.
    */
    int mat[v][v];

    memset(mat, 0, sizeof(mat)); // initially matrix er protita element 0 thakbe.

    while (e--) // edge er shoman loop cholbe
    {
        int a, b;
        cin >> a >> b;

        // undirected graph
        mat[a][b] = 1;
        mat[b][a] = 1;
    }

    if (mat[3][1] == 1)
        cout << "connection ache";
    else
        cout << "connection nai";

    return 0;
}