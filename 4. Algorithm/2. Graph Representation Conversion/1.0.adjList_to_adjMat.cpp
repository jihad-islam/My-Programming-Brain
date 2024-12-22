/*
    1. question e adjacency list dewai thakbe, but ekhane adjacency list input newa hoise.
*/

#include <bits/stdc++.h>
using namespace std;

void convert(int v, vector<int> adj[])
{
    int mat[v][v];
    memset(mat, 0, sizeof(mat));

    // ei part tukete diagonally 1 kora hoise. but bujhi nai ken diagonally 1 korse.
    // for (int i = 0; i < v; i++)
    //     for (int j = 0; j < v; j++)
    //     {
    //         mat[i][j] = 0;
    //         if (i == j)
    //             mat[i][j] = 1;
    //     }

    for (int i = 0; i < v; i++)
        for (int child : adj[i])
            mat[i][child] = 1;

    // print adj matrix
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
            cout << mat[i][j] << " ";

        cout << endl;
    }
}

int main()
{

    // ami ekhane adjacency list banay nitesi. but amar question e adj list dewai thakbe. adj list dewa thakbe means amake ekta array dibe.
    int v, e;
    cin >> v >> e;

    vector<int> arr[v];

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    convert(v, arr); // question e jei array dibe oi array ke matrix e convert korbo.

    return 0;
}