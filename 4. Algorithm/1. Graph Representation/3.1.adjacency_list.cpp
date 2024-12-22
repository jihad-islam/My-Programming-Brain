/*
    1. aager adjacency list e just desire vertex er connection gula output show korbe, but etay shobgula vertex er connection dekhabe. mainly range based for loop ta bojhar jonne ei code ta likhlam.

    2. time complexity O(v+e)

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

    vector<int> arr[v];

    while (e--) // tc O(e)
    {
        int a, b;
        cin >> a >> b;

        // for undirected graph
        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    int i = 0;
    for (auto &row : arr) // tc O(v). v means vertex
    {
        cout << "Connections of vertex " << i++ << ": ";

        for (auto x : row) // tc O(e)
            cout << x << " ";

        cout << endl;
    }

    return 0;
}
