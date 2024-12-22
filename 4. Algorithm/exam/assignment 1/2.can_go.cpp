/*
    input e 2d matrix dibe. dot(.) holo floor and hash(#) holo deyal. only floor use kore A theke B te jaite parbo kina?

input:
5 8
########
#.A#...#
#.##.#B#
#......#
########

output: YES
*/

#include <bits/stdc++.h>
using namespace std;

int ai, aj, bi, bj;

char arr[1005][1005];
bool vis[1005][1005];

vector<pair<int, int>> child = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

int r, c;

bool valid(int ci, int cj)
{
    if (ci < 0 or cj < 0 or ci >= r or cj >= c or arr[ci][cj] == '#')
        return false;

    return true;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + child[i].first;
        int cj = sj + child[i].second;

        if (valid(ci, cj) and !vis[ci][cj])
            dfs(ci, cj);
    }
}

int main()
{
    cin >> r >> c;

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> arr[i][j];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (arr[i][j] == 'A')
            {
                ai = i;
                aj = j;
            }

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (arr[i][j] == 'B')
            {
                bi = i;
                bj = j;
            }

    memset(vis, false, sizeof(vis));

    dfs(ai, aj);

    if (vis[bi][bj])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
