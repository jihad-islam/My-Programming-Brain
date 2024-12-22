/*
    1. ekta square matrix input nibo. matrix tar primary and secondary diagonal er value 1 hote hobe
       and baki element gulo 0 hote hobe.
    2. eikhane diagonal and scalar matrix er basic kaje lagse. but if er condition gulo shortcut e korsi.
       shortcut gulo shikhe rakhte hobe.
*/

#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int count = 0;

    if (n != m)
    {
        count = 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j && a[i][j] != 1)
            {
                count = 1;
            }

            else if (i + j == m - 1 && a[i][j] != 1)
            {
                count = 1;
            }

            else if (i != j && i + j != m - 1 && a[i][j] != 0) // ekhane jodi shudu a[i][j] != 0 eta use korle condition full hobe na.
            {
                count = 1;
            }
        }
        if (count == 1)
            break;
    }

    if (count == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
