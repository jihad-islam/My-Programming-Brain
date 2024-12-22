/*

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

    int mat[v][v];
    memset(mat, 0, sizeof(mat));

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        mat[a][b] = 1;
        mat[b][a] = 1;
    }

    cout << "The adjacency matrix is:\n";

    for (auto &row : mat)
    {
        for (auto element : row)
            cout << element << " ";

        cout << endl; // New line after each row
    }

    return 0;
}
