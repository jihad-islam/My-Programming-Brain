/*
    1. 2d grid actually 2d matrix or 2d array. jekhane bfs or dfs apply kore matrix er kono ekta cell theke onno ekta cell e jay. grid er protita cell ke graph er vertex(node) hishebe dhora hoy. grid character, int, etc jekono type er hote pare.

    2. grid e jei cell theke traverse shuru korbo oi cell ke parent cell and jei cell gulate jaite parbo oi cell gulo ke child hisebe dhora hoy.
       amke question e bole dibe ami up,down,left,right and diagonally jaite parbo kina. amra ekhane jei code likhsi ekhane just upor,nich,left,right jawa jay. tai kono cell er maximum children 4 ta fixed ei code e.

    3. ei code e input hishebe parent er index dibo and oi parent er jotogula children ase tader index print korbo.

    input:  4 4 (row and column, programming e row and column counting shur hoy 0 theke. that means 4 ta row and column counting hobe 0,1,2,3)

            . . . .
            . . . .
            . . . .
            . . . .

            1 1 (source er row and column)

4 4
. . . .
. . . .
. . . .
. . . .
1 1

*/

#include <bits/stdc++.h>
using namespace std;

char arr[20][20]; // grid er max row and column no question e deya thakbe.
bool vis[20][20];

vector<pair<int, int>> child = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}; // fixed 4 ta children er index rekhe dilam

int row, col;

bool valid(int ci, int cj)
{
    if (ci < 0 or cj < 0 or ci >= row or cj >= col) // ei shob gula condition invalid er jonne. condition gula khatay eke bojha lagbe.
        return false;

    return true;
}

/*
    1. dfs e shurute amra source print kortam, then source take visited kortam
    2. then oi source er child gulare access kore child diye recursive call kortam
    3. ekhane aage child er cell gulo ber kora lagbe then oi cell diye recursive call korbo
    4. normal dfs e child access korle amra dekhtam child ta visited kina. but grid e child exist kore kina or valid kina etaw check kore nite hoy.

    5. ekhane ekta basic ase ami konta aage check korbo? visited na valid? amake obosshoi valid kina eta aage check korte hobe.
       shurute jodi visited kina check kori tahole invalid index check korte jaya error khabo. tai aage check kore nibo index ta valid kina, valid hoile then visited kina check korbo.
*/
void dfs(int si, int sj)
{
    cout << si << " " << sj << endl;
    vis[si][sj] = true;

    for (int n = 0; n < 4; n++) // children 4 ta fixed tai 4 bar loop cholbe.
    {
        // eta children er cell ber korar niyom. ektu vablei bujhe jabo. easy.
        int ci = si + child[n].first;
        int cj = sj + child[n].second;

        // if (valid(ci, cj) == true && vis[ci][cj] == false)
        if (valid(ci, cj) and !vis[ci][cj])
            dfs(ci, cj);
    }
}

int main()
{
    // grid input
    cin >> row >> col;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> arr[i][j];

    memset(vis, false, sizeof(vis));

    int si, sj; // source cell
    cin >> si >> sj;

    dfs(si, sj);

    return 0;
}