#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    int element = n * m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 0)
            {
                count++;
            }
        }
    }

    if (count == element)
    {
        printf("Null Matrix\n");
    }

    else
    {
        printf("Not Null Matrix\n");
    }

    return 0;
}